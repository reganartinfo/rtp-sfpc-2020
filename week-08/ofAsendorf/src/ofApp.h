#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void sortRow();
        void sortColumn();
    
    // sorting modes
    // 0 = black
    // 1 = brightness
    // 2 = white
    int mode = 1;
    
    ofImage img;
    
    int loops = 1;
    
    // threshold values to determine sorting start and end pixels;
    int blackValue = -16000000;
    int brightnessValue = 60;
    int whiteValue = -13000000;
    
    int row = 0;
    int column = 0;
    
    bool saved = false;
		
};
