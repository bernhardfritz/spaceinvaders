#ifndef INVADER_HPP
#define INVADER_HPP

#include "sprite.hpp"
#include "hasboundingbox.hpp"

class Invader : public HasBoundingBox {
private:
    glm::vec2 position;
    float s;
    glm::vec4 color;
    int dt;
    int points;
    std::vector<Sprite> frames;

    int index;
    int lastMillis;
    
public:
    Invader(glm::vec2 position, float s, glm::vec4 color, int dt, int points, std::vector<Sprite> frames)
        : position(position)
        , s(s)
        , color(color)
        , dt(dt)
        , points(points)
        , frames(frames)
        , index(0)
        , lastMillis(0)
    {};

    void shoot();
    void update(glm::vec2 velocity, int dt);
    void draw();
    int getPoints();
    BoundingBox getBoundingBox();
};

#endif /* INVADER_HPP */
