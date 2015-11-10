#pragma once

#include "ofMain.h"
#include "ofxMSAInteractiveObject.h"

class Button : public ofxMSAInteractiveObject {
  public:
  	ofBaseDraws	*content;
  	int i;	// id, for print when draw

  	Button() {
  		content = NULL;
  	}

    void update(){
    	enableMouseEvents();
    	enableKeyEvents();
    }

    void draw() { 
     // cout << i << endl;  
        content->draw(x, y, width, height);
    }

    void onPress(int x, int y, int button){
    	cout << "click!" << endl;
    }
};

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void drawPage1();
    	void drawPage2();
   		void drawPage3();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		vector<Button>  buttonVector;
		vector<ofImage> imageVector;

        // Button testButton;
		ofImage testImg;
};
