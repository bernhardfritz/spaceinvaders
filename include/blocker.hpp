#ifndef BLOCKER_HPP
#define BLOCKER_HPP

#include "hasboundingbox.hpp"

class Blocker : public HasBoundingBox {
private:
    float left, top, right, bottom;
    glm::vec4 color;
public:
    Blocker(float left, float top, float right, float bottom, glm::vec4 color)
        : left(left)
        , top(top)
        , right(right)
        , bottom(bottom)
        , color(color)
    {};

    void draw();
    BoundingBox getBoundingBox();
};

#endif /* BLOCKER_HPP */
