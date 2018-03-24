#include "projectile.hpp"
#include <xd/xd.hpp>

using namespace xd;

void Projectile::update() {
    position += velocity;
    if (millis() > lastMillis + 150) {
        lastMillis = millis();
        swap(sprite1, sprite2);
    }
}

void Projectile::draw() {
    sprite1->draw(position.x, position.y, s, color);
}

BoundingBox Projectile::getBoundingBox() {
    return BoundingBox(position.x, position.y, position.x + s * sprite1->columns, position.y + s * sprite1->rows);
}

bool Projectile::hit(HasBoundingBox& hasBoundingBox) {
    BoundingBox ownBoundingBox = getBoundingBox();
    BoundingBox otherBoundingBox = hasBoundingBox.getBoundingBox();
    return ownBoundingBox.intersects(otherBoundingBox);
}
