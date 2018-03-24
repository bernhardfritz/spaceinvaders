#include "invader.hpp"
#include "colorsheet.hpp"
#include "spritesheet.hpp"
#include "projectile.hpp"
#include "projectiles.hpp"

using namespace xd;

void Invader::shoot() {
    hostileProjectiles.push_back(Projectile(position + vec2(frames[0].columns * s / 2.0f, 0.0f), vec2(0.0f, 5.0f), s, WHITE, &sprites[15], &sprites[16]));
}

void Invader::update(vec2 velocity, int dt) {
    position += velocity;
    this->dt = dt;
}

void Invader::draw() {
    frames[index].draw(position.x, position.y, 2.0f, color);
    if (millis() - lastMillis > dt) {
        lastMillis = millis();
        index = (index + 1) % frames.size();
    }
}

int Invader::getPoints() {
    return points;
}

BoundingBox Invader::getBoundingBox() {
    return BoundingBox(position.x, position.y, position.x + s * frames[0].columns, position.y + s * frames[0].rows);
}
