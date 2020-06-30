#include "ofApp.h"
#include <iostream>
#include <string>
#include <list>

//--------------------------------------------------------------
void ofApp::setup(){
    
    font.load("Bodoni 72.ttc", 50);
    
    std::string str = "COMMUNICATION";
    std::list<char> chars(str.begin(), str.end());
    
    for (char c: chars){
        std::cout << c << '\n';
    }
    
    return 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofBackground(199, 175, 161);
//
//    // dk brown = default
//    ofSetColor(32, 16, 6);
//
//    // lt brown
//    // ofSetColor(128, 65, 46);
//
//    // orange
//    // ofSetColor(178, 83, 47);
//
//    // pink
//    // ofSetColor(145, 51, 87);
//
//    string comm = "COMMUNICATION";
//
//    for (int i = 0; i < 13; i++){
//        float y = ofMap(i, 0, 12, 60, 700);
//        font.drawString(comm, 0, y);
//
//        ofNoFill();
//        ofRectangle rect = font.getStringBoundingBox(comm, 0, y);
//        ofDrawRectangle(rect);
//
//    }
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
