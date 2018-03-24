#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <string>
#include <xd/xd.hpp>

class Sprite {
public:
    const std::string str;
    const int columns;
    const int rows;
    
    Sprite() : str(""), columns(0), rows(0) {};
    Sprite(const std::string str, const int columns) : str(str), columns(columns), rows(str.length() / columns) {};

    void draw(float x, float y, float s, glm::vec4 color) const;
};

#endif /* SPRITE_HPP */
