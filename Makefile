# Makefile for Library
CXXFLAGS = -w -std=c++11
LDFLAGS = -L/usr/local/lib -lXext -lm -Wl,-Bsymbolic-functions -lfltk_images -lfltk -lX11

all: gui

debug: CXXFLAGS += -g
debug: gui

rebuild: clean gui

gui: controller.cpp
	$(CXX) $(CXXFLAGS) $(fltk-config --use-images --cxxflags) -o gui controller.cpp $(LDFLAGS)

clean:
	-rm -f *.o gui cli

