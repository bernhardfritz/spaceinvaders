#include "sprite.hpp"
#include <xd/xd.hpp>

using namespace xd;

void Sprite::draw(float x, float y, float s, vec4 color) const {
    int i = 0;
    for (const char& c : this->str) {
        if (c != ' ') {
            int row = i / this->columns;
            int column = i % this->columns;
            push();
            translate(x, y);
            scale(s, s);
            stroke(color);
            point(column, row);
            pop();
        }
        i++;
    }
}
