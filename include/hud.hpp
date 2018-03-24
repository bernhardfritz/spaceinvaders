#ifndef HUD_HPP
#define HUD_HPP

#include "font.hpp"

class Hud {
private:
    Font font;
    std::string paddedScore1;
public:
    Hud();

    void setup();
    void updateScore1(int score1);
    void draw();
};

#endif /* HUD_HPP */