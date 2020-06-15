#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("Bodoni 72.ttc", 52);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(199, 175, 161);
    
    // dk brown = default
    ofSetColor(32, 16, 6);
    
    // lt brown
    // ofSetColor(128, 65, 46);
    
    // orange
    // ofSetColor(178, 83, 47);
    
    // pink
    // ofSetColor(145, 51, 87);
    
    const char *communication[10] = { "MOCMNUICTAINO", "OCMUMNCIATNOI", "CMONUMACINOIT", "UICMOUNMTAINC", "NOCMIUANCTIOM", "TOUNMCIMANOIC", "OUMMCCNAIITNO", "UNICOMMTIONCA",  "COMMUNICATION", "BY DESIGN"};
    
    for (int i = 0; i < 10; i++){
        float y = ofMap(i, 0, 9.25, 60, 580);
        font.drawString(communication[i], 15, y);
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
