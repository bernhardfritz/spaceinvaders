all:
	g++ -std=c++11 src/sketch.cpp src/sprite.cpp src/fontsheet.cpp src/invader.cpp src/font.cpp src/laserbase.cpp src/projectile.cpp src/boundingbox.cpp src/blocker.cpp src/explosion.cpp src/swarm.cpp src/hud.cpp src/startscreen.cpp -o bin/sketch -Iinclude -Llib -lxd -lglad -lglfw3 -framework Cocoa -framework IOKit -framework CoreFoundation -framework CoreVideo
