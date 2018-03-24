#ifndef HAS_BOUNDING_BOX_HPP
#define HAS_BOUNDING_BOX_HPP

#include "boundingbox.hpp"

class HasBoundingBox {
public:
    virtual BoundingBox getBoundingBox() = 0;
};

#endif /* HAS_BOUNDING_BOX_HPP */
