#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//	ofSetFrameRate(30);
	ofBackground(255,255,255);
	ofSetVerticalSync(false);
	
	screenFbo.allocate(ofGetWidth(),ofGetHeight());
	
//	for (int i = 0; i < 2; i++) {
//		ofVideoPlayer p;
//		ofTexture tex;
//		p.load("movies/" + ofToString(i) + ".mp4");
//		movies.push_back(p);
//		cout << i << "," << p.getWidth() << "," << p.getHeight() << endl;
//		tex.allocate(p.getWidth(),p.getHeight(),GL_RGBA);
//		texs.push_back(tex);
//		p.play();
//
//	}
	player.load("movies/0.mp4");
	playerTex.allocate(player.getWidth(),player.getHeight(),GL_RGBA);
	player.play();
}

//--------------------------------------------------------------
void ofApp::update(){
//	for (int i = 0; i < movies.size(); i++) {
//		movies.at(i).update();
//		if (movies.at(i).isFrameNew()) {
////		texs.at(i).clear();
//			texs.at(i) = movies.at(i).getTexture();
//		}
//	}
	
	player.update();
	playerTex = player.getTexture();
}

//--------------------------------------------------------------
void ofApp::draw(){
	float posXFactor = 100 * (1 + sin(ofGetElapsedTimef()));
//	float posXFactor = 500;
//	screenFbo.begin();
//	for (int i = 0; i < movies.size(); i++) {
//		int x = i * posXFactor;
//		int y = 0;
//		int z = i;
//		int w = movies.at(i).getWidth() - x;
//		int h = texs.at(i).getHeight();
//		int sx = i * posXFactor;
//		int sy = texs.at(i).getHeight();
//		texs.at(i).drawSubsection(x, y, z,w, h, sx, sy);
//
//
//	}
//	screenFbo.end();
//	screenFbo.draw(0,0);
	
//	player.draw(posXFactor, 0);
//	ofRectangle rect;
//	rect.x = 100;
//	rect.y = 200;
//	rect.width = 100;
//	rect.height = 100;
//	player.draw(rect);
	playerTex.drawSubsection(100, 100,0, 100, 100, 100, 100);
	playerTex.drawSubsection(200, 100,0, 100, 100, 200, 100);
//	playerTex.drawSubsection(100,100,1,100, 100, 200, 100);
//	
//	playerTex.drawSubsection(100, 100,2, 100, 100, 100, 100);

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
