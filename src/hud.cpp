#include "hud.hpp"
#include "colorsheet.hpp"
#include <xd/xd.hpp>
#include "fontsheet.hpp"

using namespace xd;

Hud::Hud() {
    font = Font(characters, ROWS_PER_CHARACTER);
    setup();
}

void Hud::setup() {
    paddedScore1 = "0000";
}

void Hud::updateScore1(int score1) {
    string str = to_string(score1);
    paddedScore1 = string(4 - str.length(), '0') + str;
}

void Hud::draw() {
    font.draw("SCORE<1>", 15.0f, 0.0f, 2.25f, WHITE);
    font.draw(paddedScore1, 51.0f, 35.0f, 2.25f, WHITE);
    font.draw("HI-SCORE", 172.0f, 0.0f, 2.25f, WHITE);
    font.draw("0000", 190.0f, 35.0f, 2.25f, WHITE);
    font.draw("SCORE<2>", 335.0f, 0.0f, 2.25f, WHITE);
    font.draw("CREDIT  00", 300.0f, height - 35.0f, 2.25f, WHITE);
}