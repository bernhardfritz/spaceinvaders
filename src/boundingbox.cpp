#include "boundingbox.hpp"

bool BoundingBox::intersects(BoundingBox& that) {
    return !(this->left > that.right
        || this->right < that.left
        || this->top > that.bottom
        || this->bottom < that.top);
}

vec2 BoundingBox::getCenter() {
    return vec2(left + (right - left) / 2.0f, top + (bottom - top) / 2.0f);
}

float BoundingBox::getLeft() {
    return left;
}

float BoundingBox::getTop() {
    return top;
}

float BoundingBox::getRight() {
    return right;
}

float BoundingBox::getBottom() {
    return bottom;
}
