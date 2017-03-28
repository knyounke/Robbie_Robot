#Makefile for Robbie Robot
CXXFLAGS += --std=c++11


all: main

rebuild: clean main

main: main.o controller.o part.o arm.o torso.o battery.o locomotor.o head.o
	$(CXX) $(CXXFLAGS) main.o controller.o part.o arm.o torso.o battery.o locomotor.o head.o
main.o: main.cpp controller.h part.h arm.h torso.h battery.h
	$(CXX) $(CXXFLAGS) -c main.cpp
part.o: part.cpp part.h
	$(CXX) $(CXXFLAGS) -c part.cpp
controller.o: controller.cpp controller.h
	$(CXX) $(CXXFLAGS) -c controller.cpp
arm.o: arm.cpp arm.h	
	$(CXX) $(CXXFLAGS) -c arm.cpp
torso.o: torso.cpp torso.h
	$(CXX) $(CXXFLAGS) -c torso.cpp
battery.o: battery.cpp battery.h
	$(CXX) $(CXXFLAGS) -c battery.cpp
head.o: head.cpp head.h
	$(CXX) $(CXXFLAGS) -c head.cpp
locomotor.o: locomotor.cpp locomotor.h
	$(CXX) $(CXXFLAGS) -c locomotor.cpp



clean:
	-rm -f *.o *~ a.out
