#include "blocker.hpp"
#include "colorsheet.hpp"
#include <xd/xd.hpp>

using namespace xd;

void Blocker::draw() {
    push();
    fill(color);
    noStroke();
    rectMode(CORNERS);
    rect(left, top, right, bottom);
    pop();
}

BoundingBox Blocker::getBoundingBox() {
    return BoundingBox(left, top, right, bottom);
}
