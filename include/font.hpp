#ifndef FONT_HPP
#define FONT_HPP

#include "sprite.hpp"
#include <string>
#include <xd/xd.hpp>

class Font {
private:
    const Sprite* characters;
    int rowsPerCharacter;

public:
    Font() {};
    Font(const Sprite* characters, int rowsPerCharacter) : characters(characters), rowsPerCharacter(rowsPerCharacter) {};

    void draw(std::string str, float x, float y, float s, glm::vec4 color); 
};

#endif /* FONT_HPP */
