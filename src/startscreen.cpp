#include "startscreen.hpp"
#include "fontsheet.hpp"
#include "colorsheet.hpp"
#include "spritesheet.hpp"

Startscreen::Startscreen() {
    font = Font(characters, ROWS_PER_CHARACTER);
}

void Startscreen::draw() {
    font.draw("PLAY", 210.0f, 120.0f, 2.25f, WHITE);
    font.draw("SPACE   INVADERS", 120.0f, 170.0f, 2.25f, WHITE);
    font.draw("*SCORE ADVANCE TABLE*", 70.0f, 240.0f, 2.25f, WHITE);
    sprites[0].draw(145.0f, 273.0f, 2.0f, WHITE);
    font.draw("=? MYSTERY", 180.0f, 270.0f, 2.25f, WHITE);
    sprites[6].draw(154.0f, 301.0f, 2.0f, WHITE);
    font.draw("=30 POINTS", 180.0f, 300.0f, 2.25f, WHITE);
    sprites[3].draw(152.0f, 332.0f, 2.0f, WHITE);
    font.draw("=20 POINTS", 180.0f, 330.0f, 2.25f, WHITE);
    sprites[2].draw(150.0f, 361.0f, 2.0f, WHITE);
    font.draw("=10 POINTS", 180.0f, 360.0f, 2.25f, WHITE);
}