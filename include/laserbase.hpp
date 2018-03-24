#ifndef LASER_BASE_HPP
#define LASER_BASE_HPP

#include "sprite.hpp"
#include "hasboundingbox.hpp"

class LaserBase : public HasBoundingBox {
private:
    glm::vec2 position;
    float s;
    glm::vec4 color;
    const Sprite& sprite;

    glm::vec2 velocity;
    int lastShotFired;

public:
    LaserBase(glm::vec2 position, float s, glm::vec4 color, const Sprite& sprite)
        : position(position)
        , s(s)
        , color(color)
        , sprite(sprite)
        , velocity(vec2(0.0f, 0.0f))
        , lastShotFired(0)
    {};

    void move(float dx);
    void shoot();
    void update();
    void draw();
    vec2 getVelocity();
    BoundingBox getBoundingBox();
};

#endif /* LASERBASE_HPP */
