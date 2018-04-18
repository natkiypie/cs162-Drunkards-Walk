#pragma once

static const int NUMBER_OF_DRUNKARDS = 50;

#include "ofMain.h"
#include "Drunkard.h"

class ofApp : public ofBaseApp {

	public:
    Drunkard** drunkards;
		void setup();
		void update();
		void draw();
    ofSoundPlayer aka47;
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
		
};
