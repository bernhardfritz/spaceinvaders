SRCDIR = src
OBJDIR = obj
BINDIR = bin
SOURCES := $(SRCDIR)/sketch.cpp $(SRCDIR)/sprite.cpp $(SRCDIR)/fontsheet.cpp $(SRCDIR)/invader.cpp $(SRCDIR)/font.cpp $(SRCDIR)/laserbase.cpp $(SRCDIR)/projectile.cpp $(SRCDIR)/boundingbox.cpp $(SRCDIR)/blocker.cpp $(SRCDIR)/explosion.cpp $(SRCDIR)/swarm.cpp $(SRCDIR)/hud.cpp $(SRCDIR)/startscreen.cpp
# Objs are all the sources, with .cpp replaced by .o
OBJS := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

CC := g++
CFLAGS := -std=c++11
INCLUDES := -Iinclude
LFLAGS := -Llib
LIBS := -lxd -lglad -lglfw3
LINUXLIBS := -lrt -lm -ldl -lX11 -lpthread
MACOSLIBS := -framework Cocoa -framework IOKit -framework CoreFoundation -framework CoreVideo
WINDOWSLIBS := -lkernel32 -luser32 -lgdi32 -lwinspool -lshell32 -lole32 -loleaut32 -luuid -lcomdlg32 -ladvapi32

# Compile the binary 'sketch' by calling the compiler with cflags, lflags, and any libs (if defined) and the list of objects.
all: $(OBJS)
ifeq ($(OS),Windows_NT)
	$(CC) $(CFLAGS) -o $(BINDIR)/sketch $(OBJS) $(LFLAGS) $(LIBS) $(WINDOWSLIBS)
else
ifeq ($(shell uname -s),Linux)
	$(CC) $(CFLAGS) -o $(BINDIR)/sketch $(OBJS) $(LFLAGS) $(LIBS) $(LINUXLIBS)
endif
ifeq ($(shell uname -s),Darwin)
	$(CC) $(CFLAGS) -o $(BINDIR)/sketch $(OBJS) $(LFLAGS) $(LIBS) $(MACOSLIBS)
endif
endif

# Get a .o from a .cpp by calling compiler with cflags and includes (if defined)
$(OBJS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
