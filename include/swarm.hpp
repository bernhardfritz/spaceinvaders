#ifndef SWARM_HPP
#define SWARM_HPP

#include "invader.hpp"
#include <xd/xd.hpp>

class Swarm {
private:
    std::vector<Invader> invaders;
    int gridOffset;
    float left;
    float right;
    int lastMillis;
    glm::vec2 velocity;
    int dt;
    float s;
    int nextShot;

public:
    Swarm()
    : invaders({})
    , gridOffset(36)
    , left(0.0f)
    , right(0.0f)
    , lastMillis(0.0f)
    , velocity(vec2(2.0f, 0.0f))
    , dt(500)
    , s(2.0f)
    , nextShot(xd::millis() + xd::random(500, 5000))
    {};

    void setup();
    void update();
    void draw();

    std::vector<Invader>::iterator begin();
    std::vector<Invader>::iterator end();
    std::vector<Invader>::iterator erase(std::vector<Invader>::iterator iterator);
};

#endif /* SWARM_HPP */