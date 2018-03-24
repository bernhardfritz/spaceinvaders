#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include "sprite.hpp"
#include "hasboundingbox.hpp"

class Projectile : public HasBoundingBox {
private:
    glm::vec2 position;
    glm::vec2 velocity;
    float s;
    glm::vec4 color;
    const Sprite* sprite1;
    const Sprite* sprite2;

    int lastMillis;
public:
    Projectile(glm::vec2 position, glm::vec2 velocity, float s, glm::vec4 color, const Sprite* sprite1, const Sprite* sprite2)
        : position(position)
        , velocity(velocity)
        , s(s)
        , color(color)
        , sprite1(sprite1)
        , sprite2(sprite2)
        , lastMillis(0)
    {};

    void update();
    void draw();
    BoundingBox getBoundingBox();
    bool hit(HasBoundingBox& hasBoundingBox);
};

#endif /* PROJECTILE_HPP */
