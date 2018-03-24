#include "explosion.hpp"

bool Explosion::isOver() {
    return millis() - lastMillis > 200;
}

void Explosion::draw() {
    sprite->draw(center.x - s * sprite->columns / 2.0f, center.y - s * sprite->rows / 2.0f, s, color);
}