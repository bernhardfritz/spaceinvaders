#include "font.hpp"

using namespace xd;

void Font::draw(string str, float x, float y, float s, vec4 color) {
    vec2 offset = vec2(0.0f, 0.0f);
    int line = 0;
    for (const char& c : str) {
        if (0 <= c && c <= 127) {
            if (c == '\n') {
                offset = vec2(0.0f, ++line * rowsPerCharacter * s);
                continue;
            }
            const Sprite* sprite = characters + c;
            sprite->draw(x + offset.x, y + offset.y, s, color);
            offset.x += (sprite->columns + 3) * s;
        }
    }
}
