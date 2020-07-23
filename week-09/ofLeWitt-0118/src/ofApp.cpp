#include "ofApp.h"

// Sol LeWitt
//Wall Drawing #118
//Fifty randomly placed points connected by straight lines

//Black pencil
//First drawn by: Dawn Shifreen, William Sizemore, Gary Snyder, Roger Sutro, David Whittredge
//First installation: School of the Museum of Fine Arts Gallery, Boston
//December 1971

//Private collection, Chicago

//At School of the Museum of Fine Arts Gallery (1971), the work was installed using blue snap lines. Per the recollection of drafter David Whittredge, the change from black pencil to blue snap lines was suggested by the drafters and approved by LeWitt. All known subsequent installations have used black pencil.

//SUBSEQUENT INSTALLATIONS
//Private residence, Chicago, 2016
//Fundación Botín, Santander, Spain, 2015
//Barbara and Steven Grossman Gallery, School of the Museum of Fine Arts, Boston, 2012
//Dia:Beacon, New York, 2006
//Private residence, Chicago, 1990

//--------------------------------------------------------------
void ofApp::setup(){
    int alpha = 25;
    
    ofBackground(233, 230, 226);
    ofEnableAlphaBlending();
    ofSetColor(0, alpha);
    ofSetLineWidth(.5);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    int numPoints = 50;
    int wallWidth = ofGetWidth();
    int wallHeight = ofGetHeight();

    for (int counterPoints = 0; counterPoints < numPoints; counterPoints++) {
        int x = ofRandom(0, wallWidth);
        int y = ofRandom(0, wallHeight);

        wallPoints.push_back(ofPoint(x, y));
        
        for (int counterLines = 0; counterLines < numPoints; counterLines++) {
            ofDrawLine(wallPoints[counterPoints], wallPoints[counterLines]);
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
