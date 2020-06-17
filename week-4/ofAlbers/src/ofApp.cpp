#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // img ref: https://www.cooperhewitt.org/2013/06/12/a-puzzling-order/
    // see also: https://en.wikipedia.org/wiki/Truchet_tiles
    
    ofBackground(232, 212, 196);
    ofSetColor(189, 79, 51);
    ofSeedRandom(mouseX);
    
    int tileSize = 10;
    int nx = int(floor(ofGetWindowWidth() / tileSize));
    int ny = int(floor(ofGetWindowHeight() / tileSize));
    
    for (int ix = 0; ix < nx; ix++){
        for (int iy = 0; iy < ny; iy++){
            float x0 = ix * tileSize;
            float y0 = iy * tileSize;
            float x1 = (ix + 1) * tileSize;
            float y1 = (iy + 1) * tileSize;
            int tileOrientation = ofRandom(1, 4);
            
            if (tileOrientation == 0){
                ofDrawTriangle(x0, y0, x1, y0, x1, y1);
            } else if (tileOrientation == 1){
                ofDrawTriangle(x0, y0, x0, y1, x1, y1);
            } else if (tileOrientation == 2){
                ofDrawTriangle(x0, y0, x1, y0, x0, y1);
            } else {
                ofDrawTriangle(x1, y0, x1, y1, x0, y1);
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
