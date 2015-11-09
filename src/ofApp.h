#pragma once

#include "ofMain.h"
#include "ofxMSAInteractiveObject.h"

class Button : public ofxMSAInteractiveObject {
  public:
  	ofBaseDraws	*content;

  	Button() {
  		content = NULL;
  	}

    void setup() {
        cout << "Button::setup()" << endl;
        enableMouseEvents();
        enableKeyEvents();
    }

    void draw() { 
    	// this does not work
    	width = content->getWidth();  
        height = content->getHeight();  
        content->draw(x, y, 100, 70); // testButton.set() seems not change widht/height
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

		Button testButton;
		ofImage testImg;
};
