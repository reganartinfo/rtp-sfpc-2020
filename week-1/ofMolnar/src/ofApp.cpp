#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // ref: https://collections.vam.ac.uk/item/O1193777/structures-of-squares-drawing-molnar-vera/
    
    // n.b. change ofSetupOpenGL to 700 x 700 in main.cpp for best results
    
    // background color: https://imagecolorpicker.com/en/
    ofBackground(246, 241, 233);
    
    ofSetColor(0);
    ofSetLineWidth(2);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofNoFill();
    
    ofSeedRandom(mouseX);
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            float x = ofMap(i, 0, 4, 100, 600);
            float y = ofMap(j, 0, 4, 100, 600);
            
            ofDrawRectangle(x, y, 120, 120);
            
            int numSquares = ofRandom(2, 9);
            for (int n = 0; n < numSquares; n++) {
                float measureSquares = ofRandom(10, 120);
                float xOffset = ofRandom(-40, 40);
                float yOffset = ofRandom(-40, 40);
                
                ofDrawRectangle(x+xOffset, y+yOffset, measureSquares, measureSquares);
                
            }
        }
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
