#include "laserbase.hpp"
#include "colorsheet.hpp"
#include "spritesheet.hpp"
#include "projectiles.hpp"
#include <xd/xd.hpp>

using namespace xd;

void LaserBase::move(float vx) {
    velocity.x = vx;
}

void LaserBase::shoot() {
    if (millis() - lastShotFired > 500) {
        lastShotFired = millis();
        friendlyProjectiles.push_back(Projectile(position + vec2(sprite.columns * s / 2.0f, 0.0f), vec2(0.0f, -5.0f), s, WHITE, &sprites[9], &sprites[9]));
    }
}

void LaserBase::update() {
    position += velocity;
    if (position.x < 0.0f) {
        position.x = 0.0f;
    }
    if (position.x + sprite.columns * s > width) {
        position.x = width - sprite.columns * s;
    }
}

void LaserBase::draw() {
    sprite.draw(position.x, position.y, s, color);
}

vec2 LaserBase::getVelocity() {
    return velocity;
}

BoundingBox LaserBase::getBoundingBox() {
    return BoundingBox(position.x, position.y, position.x + s * sprite.columns, position.y + s * sprite.rows);
}
