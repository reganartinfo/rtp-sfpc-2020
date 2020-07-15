#include "ofApp.h"

// implementation of MINI-EXPLOR

// ref: Ken Knowlton. 1975. MINI-EXPLOR: a FORTRAN-coded version of the EXPLOR language for mini (and larger) computers. SIGGRAPH Comput. Graph. 9, 3 (Fall 1975), 31–42. DOI:https://doi.org/10.1145/988049.988052


// INITIAL PICTURE ARRAY
// "The user imagines the internally-stored picture as a 140x140 array of picture cells, each holding a digit 0, 1, 2, or 3 and addressed in terms of their x,y coordinates. At the beginning of a program, all cells are filled with zeros."

int pic[140][140];

void initPic(){
    for (int j = 0; j < 140; j++){
        for (int i = 0; i < 140; i++){
            pic[i][j] = 0;
        }
    }
    return;
}

// FUNCTIONS
// "NUM (x, y) has a value (0-3) of the number currently stored in cell x,y; if (x, y) is off of the internally represented surface, the value of NUM (x, y) is 4."

int NUM(int x, int y){
    if (!((x > 0) && (x <= 140) && (y > 0) && (y <= 140))) {
        pic[x][y] = 4;
    }
    return;
}

// "NE (min, max), pronounced "any," has, on each usage, a new randomly-selected value from min thru max; max may be less then min and either or both may be negative but the difference |max-min| must be less than 199."

int NE(int min, int max){
//    int range = abs(max - min);
//
//    if (range < 199) {
//        return (int) ofRandom(min, max);
//    } else {
//        // TODO --> return random value in range (try using modulus operator?)
//    }
    
    return (int) ofRandom(min, max);
}

// SUBROUTINES

// PARAMETERS
// x is the x-coordinate of the center of the rectangle (or 1/2 cell left of center if width is an even number)
// y is the y-coordinate of the center of the rectangle (or 1/2 cell below the center if height is even)
// w is its width
// h is its height, and
// % is an integer 1 to 100 stating approximately the percentage of cells actually to be treated on a pseudorandum basis. (100 means process all of the cells for certain).


// "CALL SHOW (x, y, w, h) will cause a printout showing the contents of the specified rectangle. The specified area will be truncated if it exceeds the area actually represented in the machine or if it is too wide for the device used for output. Digits 0, 1, 2, 3 appear as a grey scale: , ', ~, and K, respectively. "

void ofApp::callSHOW(int x, int y, int w, int h){
    int left = x - (w / 2);
    int right = x + (w / 2);
    int bottom = y - (h / 2);
    int top = y + (h / 2);
    
    if (w % 2 == 1) {
        left = left - 1;
    }
    
    if (h % 2 == 1) {
        bottom = bottom - 1;
    }

    for (int i = left; i < right; i++){
        for (int j = bottom; j < top; j++){
            int val = NUM(x, y);
            string sr = "";
            
            switch(val) {
                case 0 :
                    sr = " ";
                    break;
                case 1:
                    sr = "'";
                    break;
                case 2:
                    sr = "~";
                    break;
                case 3:
                    sr = "K";
                    break;
            }
            font.drawString(sr, i, j);
        }
    }
}

// "CALL PUT (x, y, n) will put at coordinates (x, y) the number n (i.e., overwrite the previous contents). If n is larger than 3, the cell remains unchanged."

void callPUT(int x, int y, int n){
    if ((n >= 0) && (n <= 3)) {
        pic[x][y] = n;
    }
    return;
}

// "CALL PUT4 (x, y, n) where n is a 4-digit number will cause the leftmost digit to be "put" at (x, y), the next to be put at (x+l, y) etc. If any digit is larger than 3, the corresponding cell is not changed.

void callPUT4(int x, int y, int n){
    int n1 = n / 1000;
    int n2 = (n % 1000) / 100;
    int n3 = (n % 100) / 10;
    int n4 = n % 10;
    
    callPUT(x, y, n1);
    callPUT(x + 1, y, n2);
    callPUT(x + 2, y, n3);
    callPUT(x + 3, y, n4);
    return;
}

// "CALL PUT16 (x, y, nl, n2, n3, n4) where nl through n4 are each 4-digit numbers, "puts" or writes the 16 digits into 16 successive cells (x,y), (x+l, y) etc."

void callPUT16(int x, int y, int n1, int n2, int n3, int n4){
    callPUT4(x, y, n1);
    callPUT4(x + 4, y, n2);
    callPUT4(x + 8, y, n3);
    callPUT4(x + 12, y, n4);
    return;
}

// CALL CHANJ (x, y, w, h, %, rule) pronounced "change" - causes the contents of the specified rectangular area to be changed according to the specified rule: rule is a 4-digit number saying, from left to right what the digits 0, 1, 2 and 3 are to be changed into."

void callCHANGJ(int x, int y, int w, int h, int p, int rule){
}

// "CALL LOCOP (x, y, w, h, %, OK-counts, neighbors, these, rule) is a local operation, causing certain of the cells in the specified region to be changed according to the indicated rule: Those changed are the ones with acceptable counts of the designated adjacent cells holding appropriate numbers:"

// "OK-counts indicates up to 4 permissible numbers of neighbors which, satisfying the test, permit the cell to be changed by the rule. If zero is a permissible count, it must be last."
// "neighbors is a 3-digit number specifying a set of neighbors made up by summing the corresponding numbers from this chart:

//      400 200 100
//      40      10
//      4   2   1

// "these are up to 4 values that individual neighbors must have to satisfy the test. If zero is one of them, it must be last."

void callLOCOP(int x, int y, int w, int h, int p, int okCounts, int neighbors, int these, int rule){
}

// CALL COMBN (x, y, w, h, %, xf, yf, orient, r0, rl, r2, r3) read "combine" - causes contents df the indicated percentage of x, y, w, h, to be changed by one of four rules, depending on contents of a corresponding cell in an area centered at (xf, yf). The result is thus a simple or complicated "combination" of two picture areas."

void callCOMBN(int x, int y, int w, int h, int p, int xf, int yf, int orient, int r0, int r1, int r2, int r3){
}

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("Courier.dfont", 12);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofRectMode(OF_RECTMODE_CENTER);
    
    for (int x = 0; x < 140; x++){
        for (int y = 0; y < 140; y++){
            float fx = ofMap(x, 0, 140, 0, ofGetWidth());
            float fy = ofMap(y, 0, 140, 0, ofGetHeight());
            callSHOW(x, y, fx, fy);
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
