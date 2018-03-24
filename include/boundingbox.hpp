#ifndef BOUNDING_BOX_HPP
#define BOUNDING_BOX_HPP

#include <xd/xd.hpp>

class BoundingBox {
private:
    float left, top, right, bottom;

public:
    BoundingBox(float left, float top, float right, float bottom)
        : left(left)
        , top(top)
        , right(right)
        , bottom(bottom)
    {};

    bool intersects(BoundingBox& that);
    glm::vec2 getCenter();
    float getLeft();
    float getTop();
    float getRight();
    float getBottom();
};

#endif /* BOUNDING_BOX_HPP */
