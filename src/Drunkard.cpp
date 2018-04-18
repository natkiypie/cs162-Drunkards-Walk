#include "Drunkard.h"

static const int SPEED = 3;

Drunkard::Drunkard() {
  this->x = (ofGetWidth()/2);
  this->y = (ofGetHeight()/2);
  this->r = 5;
  this->color = ofColor(ofRandom(200, 255), ofRandom(200, 255), ofRandom(0, 50), ofRandom(20, 150));
}

void Drunkard::draw() {
    ofSetCircleResolution(80);
    ofSetColor(this->color);
    ofDrawCircle(this->x, this->y, this->r);
}

void Drunkard::move() {
  int direction = ofRandom(0, 100);
  if (direction <= 25) {
    this->x += SPEED;
  } else if (direction <= 50) {
    this->x -= SPEED;
  } else if (direction <= 75) {
    this->y += SPEED;
  } else if (direction <= 100) {
    this->y -= SPEED;
  }
}
