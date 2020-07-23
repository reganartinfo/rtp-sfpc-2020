#include "ofApp.h"

// Sol LeWitt
// Wall Drawing #990
// One hundred points are put on the wall. They should be randomly placed and cover the surface completely and be equally spaced. Each point should be connected to each other point using black straight lines.

// Black marker, black pencil
// First drawn by: Sanja Benak, Mandy Blue, Chris Dunaj, Julia Kaminski, Shane Knight, Herschel Levine, Leslie Macare, Rosa Nieves, Jessica Protsko, Rigoberto Sanchez, Alaina Varrone, Alyana Ventura
// First installation: Artspace, New Haven, Connecticut
// July 2001

// At Artspace (2001), the work was installed using black marker for both the points and lines, following LeWitt’s instructions. At Museum für Moderne Kunst (2001), LeWitt edited the medium of the work, making the lines black pencil, rather than black marker. All known subsequent installations have included black pencil.

// SUBSEQUENT INSTALLATIONS
// Pratt Institute Library, New York, 2016
// Museum für Moderne Kunst, Frankfurt, 2001

// ref: https://libguides.pratt.edu/c.php?g=763506&p=5475257

//--------------------------------------------------------------
void ofApp::setup(){
    int alpha = 10;
    
    ofBackground(233, 230, 226);
    ofSetColor(0, alpha);
    ofSetLineWidth(.5);
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    m_density = min<float>(w,h) * 0.08;
    m_samples = ofxPoissonDiskSampling::sample2D(w, h, m_density, false);
    
    cout << m_samples.size() << endl;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < m_samples.size(); i++) {
        for (int counterLines = 0; counterLines < m_samples.size(); counterLines++) {
            ofDrawLine(m_samples[i], m_samples[counterLines]);
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
