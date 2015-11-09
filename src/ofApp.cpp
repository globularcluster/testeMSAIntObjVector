#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetBackgroundColor(255, 255, 255);

    ofDirectory dir("images/");
    dir.listDir();
    for (int i = 0; i < dir.size(); i++) {

        ofImage img;
        img.load(dir.getPath(i));
        imageVector.push_back(img);
        cout << "i: " << i << "\tpath: " << dir.getPath(i) << endl;
    }

    //if I do this inside a previous 'for', not work
    for (int i = 0; i < imageVector.size(); i++) {
        Button Button;
        Button.content = &imageVector[i];

        Button.setPosition((i * 70) + 40, 100);
        Button.setSize(50, 40);
        Button.enableMouseEvents();	

        buttonVector.push_back( Button );
    }

    // a single Button works
    testImg.load("images/img1.jpg");
    testButton.content = &testImg;
    testButton.set(300, 300, 110, 300);
    testButton.enableMouseEvents();

}

//--------------------------------------------------------------
void ofApp::update() {}

//--------------------------------------------------------------
void ofApp::draw() {

	// // this works, but not ideal
	// // events continue not working
	// for(auto i: buttonVector)
	// 	i.content->draw( i.x, i.y, i.width, i.height);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {}