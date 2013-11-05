#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	video.loadMovie("black.mov");
	video.play();


	image.loadImage("text.bmp");

	projection.setGlobalPosition(640*2+320, 10+240, 0);
	projection.setWidth(640);
	projection.setHeight(480);
	projection.setResolution(2,2);
	projection.mapTexCoordsFromTexture(video.getTextureReference());





	shader.load("shader/shader.vert", "shader/shader.frag");

}

//--------------------------------------------------------------
void ofApp::update(){
	video.update();
	
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	video.draw(0, 10);
	image.draw(640, 10);
	
	
	ofSetColor(255);
	shader.begin();

	shader.setUniformTexture("distortMap", image.getTextureReference(), 1);
	shader.setUniformTexture("videoMap", video.getTextureReference(), 2);
	shader.setUniform2f("mouse", ofGetMouseX(), ofGetMouseY());
	ofFill();
	projection.draw();

	
	shader.end();
	//ofSetColor(ofColor::red);
	//projection.drawWireframe();

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
