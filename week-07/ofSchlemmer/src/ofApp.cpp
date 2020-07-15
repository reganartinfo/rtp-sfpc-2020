#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    grabber.listDevices();
    grabber.setDeviceID(0);
    grabber.initGrabber(640, 480);

    threshImg.allocate(grabber.getWidth(), grabber.getHeight(), OF_IMAGE_COLOR);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    if (grabber.isFrameNew()){
        for (int i = 0; i < grabber.getWidth(); i++){
            for (int j = 0; j < grabber.getHeight(); j++){
                ofColor colorGrabber = grabber.getPixels().getColor(i, j);
                
                if (colorGrabber.getBrightness() > 55){
                    threshImg.setColor(i, j, ofColor(0));
                } else {
                    threshImg.setColor(i, j, ofColor(255));
                }
            }
        }
    }
    threshImg.update();
    finder.findContours(threshImg);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
//    ofScale(2);

    threshImg.draw(0, 0);
    
    ofTranslate(threshImg.getWidth(), 0);
    if (finder.size() > 0){
        ofPolyline line = finder.getPolyline(0);
        line.draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
