#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // PROGRAM ARABESQUE
    
    // FIGURE (13) - DIFFERENTIAL POINTS AROUND A CIRCLE X-STEP MODULUS
    // COPYRIGHT 5/25/80 BY JOHN WHITNEY - PREPARED BY PAUL ROTHER
    // ADAPTED FOR APPLE - II
    
    // source: https://github.com/jbum/Whitney-Music-Box-Examples/blob/master/basic/ARABESQUE.BAS
    
    // c++ typecasting for future ref: http://www.cplusplus.com/doc/tutorial/typecasting/
    
    // to do:
    // - set xcenter and ycenter as window width/2 and window height/2 instead of hardcoding values
    // - add interactive params for users to play with
    // - pro-tip from Zach: this is probably upside-down so flip the axis!
    // - try implementing frame + nframes versus ofGetElapsedTimef()
    // - try running ARABESQUE.BAS in Apple II vm
    
    ofBackground(0);
    ofSetColor(255);
    
    // deg = pi / 180;
    float deg = 0.0174533;

    int npoints = 60;
    float stepstart = 0;
    float stepend = 1/60.0;
    
    float radius = 85;
    float xcenter = 350;
    float ycenter = 350;
    
    float time = ofGetElapsedTimef();
    float step = stepstart + (time * (stepend - stepstart));
    
    for (int i = 0; i < npoints; i++){
        float a = -90 + 360 * (i / (float)npoints);
        
        float r = 3 * radius;
        float x = cos(a * deg) * radius + i * step * r;
        int ix = (int)(xcenter - (r / 2) + int(x + (r/2)) % int(round(r)));

        int iy = int(ycenter + sin(a * deg) * radius);
        
        ofDrawCircle(ix, iy, 4);
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
