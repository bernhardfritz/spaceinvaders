#ifndef EXPLOSION_HPP
#define EXPLOSION_HPP

#include "sprite.hpp"

using namespace xd;

class Explosion {
private:
    glm::vec2 center;
    float s;
    glm::vec4 color;
    const Sprite* sprite;

    int lastMillis;

public:
    Explosion(glm::vec2 center, float s, glm::vec4 color, const Sprite* sprite)
        : center(center)
        , s(s)
        , color(color)
        , sprite(sprite)
        , lastMillis(xd::millis())
    {};

    bool isOver();
    void draw();
};

#endif /* EXPLOSION_HPP */