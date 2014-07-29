#pragma once

#include "ofMain.h"
#include "Tween.h"

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
			
	static void onComplete(void* tween)
	{
		cout << "tween has completed!" << endl;
	}
	
	Tween::TweenManager tweens;
	
	float f0;
	ofColor c, ballColor;
	ofVec3f position;
	
	ofEasyCam camera;
	
	vector<ofColor> colors;
	vector<ofVec3f> positions;
};
