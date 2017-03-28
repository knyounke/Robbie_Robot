#Makefile for Robbie Robot
CXXFLAGS += --std=c++11


all: main

rebuild: clean main

main: main.o controller.o part.o
	$(CXX) $(CXXFLAGS) main.o controller.o
main.o: main.cpp controller.h part.h
	$(CXX) $(CXXFLAGS) -c main.cpp
part.o: part.cpp part.h
	$(CXX) $(CXXFLAGS) -c part.cpp
controller.o: controller.cpp controller.h
	$(CXX) $(CXXFLAGS) -c controller.cpp	

clean:
	-rm -f *.o *~ a.out
