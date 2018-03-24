#include <xd/xd.hpp>
#include "spritesheet.hpp"
#include "colorsheet.hpp"
#include "invader.hpp"
#include "laserbase.hpp"
#include "projectiles.hpp"
#include "blocker.hpp"
#include "explosion.hpp"
#include "swarm.hpp"
#include "hud.hpp"
#include "startscreen.hpp"
#include "font.hpp"
#include "fontsheet.hpp"

using namespace xd;

vector<Projectile> friendlyProjectiles;
vector<Projectile> hostileProjectiles;

vector<Explosion> explosions;

int score1 = 0;

int lives = 3;
string livesStr = "3";

int _width = 480;
int _height = 549;
float s = 2.0f;

LaserBase laserbase(vec2(_width / 2.0f - s * sprites[10].columns / 2.0f, _height - 90.0f), s, GREEN, sprites[10]);

Blocker topBlocker(0.0f, 55.0f, _width, 58.0f, TRANSPARENT);
Blocker bottomBlocker(0.0f, _height - 38.0f, _width, _height - 35.0f, GREEN);

Swarm swarm;

Startscreen startscreen;

Hud hud;

int gameState = 0;

Font font(characters, ROWS_PER_CHARACTER);

void onKeyPressed(int key) {
    if (gameState == 0) {
        switch(key) {
            case KEY_ENTER:
                gameState = 1;
                loop();
                break;
        }
    } else if (gameState == 1) {
        switch(key) {
            case KEY_LEFT:
            case 'A':
                laserbase.move(-2.0f);
                break;
            case KEY_RIGHT:
            case 'D':
                laserbase.move(2.0f);
                break;
            case ' ':
                laserbase.shoot();
                break;
        }
    } else {
        switch(key) {
            case KEY_ENTER:
                gameState = 0;
                lives = 3;
                livesStr = "3";
                score1 = 0;
                hud.setup();
                swarm.setup();
                laserbase.move(0.0f);
                friendlyProjectiles.clear();
                hostileProjectiles.clear();
                loop();
                break;
        }
    }
}

void onKeyReleased(int key) {
    if (gameState == 0) {

    } else if (gameState == 1) {
        switch(key) {
            case KEY_LEFT:
            case 'A':
                if (sign(laserbase.getVelocity().x) == -1) {
                    laserbase.move(0.0f);
                }
                break;
            case KEY_RIGHT:
            case 'D':
                if (sign(laserbase.getVelocity().x) == 1) {
                    laserbase.move(0.0f);
                }
                break;
        }
    } else {

    }
}

void setup() {
    size(_width, _height);

    swarm.setup();

    keyPressed(onKeyPressed);
    keyReleased(onKeyReleased);
}

void draw() {
    // font.draw(
    //     " !\"#$%&'()*+,-./0123456789:;<=>?\n"
    //     "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_\n"
    //     "`abcdefghijklmnopqrstuvwxyz{|}~",
    //     0.0f,
    //     0.0f,
    //     2.0f,
    //     WHITE
    // );
    if (gameState == 0) {
        background(BLACK);
        startscreen.draw();
        hud.draw();
        noLoop();
    } else if (gameState == 1) {
        background(BLACK);
        swarm.update();
        swarm.draw();
        
        laserbase.update();
        laserbase.draw();

        vector<Projectile>::iterator friendlyProjectilesIterator = friendlyProjectiles.begin();
        while (friendlyProjectilesIterator != friendlyProjectiles.end()) {
            bool hitSomething = false;
            vector<Invader>::iterator invadersIterator = swarm.begin();
            while (invadersIterator != swarm.end()) {
                if (friendlyProjectilesIterator->hit(*invadersIterator)) {
                    score1 += invadersIterator->getPoints();
                    hud.updateScore1(score1);
                    explosions.push_back(Explosion(invadersIterator->getBoundingBox().getCenter(), 2.0f, WHITE, &sprites[7]));
                    invadersIterator = swarm.erase(invadersIterator);
                    hitSomething = true;
                    break;
                }
                invadersIterator++;
            }
            if (!hitSomething) {
                hitSomething |= friendlyProjectilesIterator->hit(topBlocker);
            }
            if (hitSomething) {
                friendlyProjectilesIterator = friendlyProjectiles.erase(friendlyProjectilesIterator);
            } else {
                friendlyProjectilesIterator->update();
                friendlyProjectilesIterator->draw();
                friendlyProjectilesIterator++;
            }
        }

        vector<Projectile>::iterator hostileProjectilesIterator = hostileProjectiles.begin();
        while (hostileProjectilesIterator != hostileProjectiles.end()) {
            bool hitSomething = false;
            hitSomething = hostileProjectilesIterator->hit(bottomBlocker);
            if (!hitSomething && hostileProjectilesIterator->hit(laserbase)) {
                explosions.push_back(Explosion(laserbase.getBoundingBox().getCenter(), 3.0f, GREEN, &sprites[7]));
                livesStr = to_string(--lives);
                if (lives == 0) {
                    gameState = 2;
                }
                hitSomething = true;
            }
            if (hitSomething) {
                hostileProjectilesIterator = hostileProjectiles.erase(hostileProjectilesIterator);
            } else {
                hostileProjectilesIterator->update();
                hostileProjectilesIterator->draw();
                hostileProjectilesIterator++;
            }
        }

        vector<Explosion>::iterator explosionsIterator = explosions.begin();
        while(explosionsIterator != explosions.end()) {
            if (explosionsIterator->isOver()) {
                explosionsIterator = explosions.erase(explosionsIterator);
            } else {
                explosionsIterator->draw();
                explosionsIterator++;
            }
        }

        topBlocker.draw();
        bottomBlocker.draw();
        hud.draw();
        font.draw(livesStr, 25.0f, height - 35.0f, 2.25f, WHITE);
        for (int i = 0; i < lives - 1; i++) {
            sprites[10].draw(60.0f + i * (2.0f * sprites[10].columns + 10.0f), _height - 35.0f, 2.0f, GREEN);
        }
    } else {
        font.draw("GAME OVER", 160.0f, 120.0f, 2.25f, WHITE);
        noLoop();
    }
}

void destroy() {

}
