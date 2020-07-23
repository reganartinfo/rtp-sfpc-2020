#include "ofApp.h"
// ASDF Pixel Sort
// Kim Asendorf | 2010 | kimasendorf.com
// Processing script to sort portions of pixels in an image.

// source: https://github.com/kimasendorf/ASDFPixelSort

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("01.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // loop through columns
    while (column < img.getWidth() - 1) {
        cout << "Sorting column: " << column << endl;
        img.getPixels();
        // sortColumn;
        column++;
        // img.updatePixels()
    }
    
    // loop through rows
    while (row < img.getHeight() - 1) {
        cout << "Sorting column: " << row << endl;
        img.getPixels();
        // sortRow();
        row++;
        // img.updatePixels();
    }
    
    img.draw(0, 0);

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

//--------------------------------------------------------------
void ofApp::sortRow(){
    // current row
    int y = row;
    
    // where to start sorting
    int x = 0;
    
    // where to stop sorting
    int xend = 0;
    
    while (xend < img.getWidth() - 1) {
        switch(mode) {
            case 0:
                // x = getFirstNotBlackX(x, y);
                // xend = getNext BlackX(x, y);
                break;
            case 1:
                // x = getFirstBrightX(x, y);
                // xend = getNextDark(x, y);
                break;
            case 2:
                // x = getFirstNotWhiteX(x, y);
                // xend = getNextWhite(x, y);
                break;
        }
        
        if (x < 0) break;
        
        int sortLength = xend - x;
        
//        color[] unsorted = new color[sortLength];
//        color[] sorted = new color [sortLength];
//
//        for (int i = 0; i < sortLength; i++) {
//            unsorted[i] = img.pixels[x + i + y * img.width];
//        }
//
//        sorted = sort(unsorted);
//
//        for (int i = 0; i < sortLength; i++) {
//            img.pixels[x + i + y * img.width] = sorted[i];
//        }
        
        x = xend + 1;
        
    }
}

//--------------------------------------------------------------
void ofApp::sortColumn(){
    // current column
    int x = column;
    
    // where to start sorting
    int y = 0;
    
    // where to stop sorting
    int yend = 0;
    
    while (yend < img.getHeight() - 1) {
        switch(mode) {
            case 0:
                // y = getFirstNotBlackY(x, y);
                // yend = getNextBlack(x, y);
                break;
            case 1:
                // y = getFirstBrightY(x, y);
                // yend = getNextDark(x, y);
                break;
            case 2:
                // y = getFirstNotWhiteY(x, y);
                // yend = getNextWhiteY(x, y);
                break;
        }
        
        if (y < 0) break;
        
        int sortLength = yend - y;
        
//        color[] unsorted = new color[sortLength];
//        color[] sorted = new color[sortLength];
//
//        for (int i = 0; i < sortLength; i++) {
//            unsorted[i] = img.pixels[x + (y + 1) * img.width];
//        }
//
//        sorted = sort(unsorted);
//
//        for (int i = 0; i < sortLength; i++) {
//            img.pixels[x + (y + i) * img.width] = sorted[i];
//        }
        
        y = yend + 1;
        
    }
}

// black x

// brightness x

// white x

// black y

// brightness y

// white y
