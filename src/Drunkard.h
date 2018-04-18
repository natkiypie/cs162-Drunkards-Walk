#pragma once
#include "ofMain.h"

class Drunkard {

  public:
    Drunkard();
    void draw();
    void move();

  private:
    int x;
    int y;
    int r;
    ofColor color;
};


