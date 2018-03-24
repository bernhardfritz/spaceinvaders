#include "swarm.hpp"
#include "colorsheet.hpp"
#include "spritesheet.hpp"
#include <xd/xd.hpp>

using namespace xd;

void Swarm::setup() {
    int totalWidthOfInvaders = (10 * gridOffset + s * sprites[1].columns);
    left = (width - totalWidthOfInvaders) / 2.0f;
    right = left + totalWidthOfInvaders;
    int customOffset = (sprites[1].columns - sprites[5].columns);
    int yOffset = 87.0f;
    invaders.clear();
    for(int i = 0; i < 11; i++) {
        invaders.push_back(Invader(vec2(left + i * gridOffset + customOffset, yOffset + left + 0 * gridOffset + customOffset), s, WHITE, dt, 30, { sprites[5], sprites[6] }));
    }
    customOffset = (sprites[1].columns - sprites[3].columns);
    for (int i = 0; i < 11; i++) {
        invaders.push_back(Invader(vec2(left + i * gridOffset + customOffset, yOffset + left + 1 * gridOffset + customOffset), s, WHITE, dt, 20, { sprites[3], sprites[4] }));
    }
    for (int i = 0; i < 11; i++) {
        invaders.push_back(Invader(vec2(left + i * gridOffset + customOffset, yOffset + left + 2 * gridOffset + customOffset), s, WHITE, dt, 20, { sprites[3], sprites[4] }));
    }
    customOffset = 0;
    for (int i = 0; i < 11; i++) {
        invaders.push_back(Invader(vec2(left + i * gridOffset + customOffset, yOffset + left + 3 * gridOffset + customOffset), s, WHITE, dt, 10, { sprites[1], sprites[2] }));
    }
    for (int i = 0; i < 11; i++) {
        invaders.push_back(Invader(vec2(left + i * gridOffset + customOffset, yOffset + left + 4 * gridOffset + customOffset), s, WHITE, dt, 10, { sprites[1], sprites[2] }));
    }
}

void Swarm::update() {
    if (millis() - lastMillis > dt) {
        lastMillis = millis();
        left += velocity.x;
        right += velocity.x;
        if (left < 10.0f || right > width - 10.0f) {
            velocity.y = gridOffset / 2.0f;
            dt = (dt * 90) / 100;
        }
        for (Invader& invader : invaders) {
            float tmp = velocity.x;
            if (velocity.y > 0.0f) {
                velocity.x = 0.0f;
            }
            invader.update(velocity, dt);
            velocity.x = tmp;
        }
        if (velocity.y > 0.0f) {
            velocity.y = 0.0f;
            velocity.x *= -1.05f;
        }
    }
    if (millis() > nextShot) {
        int r = random(0, invaders.size());
        invaders[r].shoot();
        nextShot = millis() + random(500, 5000);
    }
}

void Swarm::draw() {
    for (Invader& invader : invaders) {
        invader.draw();
    }
}

std::vector<Invader>::iterator Swarm::begin() {
    return invaders.begin();
}

std::vector<Invader>::iterator Swarm::end() {
    return invaders.end();
}

std::vector<Invader>::iterator Swarm::erase(std::vector<Invader>::iterator iterator) {
    iterator = invaders.erase(iterator);
    left = width;
    right = 0;
    for (Invader& invader : invaders) {
        BoundingBox boundingBox = invader.getBoundingBox();
        if (boundingBox.getLeft() < left) {
            left = boundingBox.getLeft();
        }
        if (boundingBox.getRight() > right) {
            right = boundingBox.getRight();
        }
    }
    return iterator;
}