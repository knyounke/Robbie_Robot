#Makefile for Robbie Robot
CXXFLAGS += --std=c++11


all: main

rebuild: clean main

main: main.o controller.o part.o arm.o
	$(CXX) $(CXXFLAGS) main.o controller.o part.o arm.o
main.o: main.cpp controller.h part.h arm.h
	$(CXX) $(CXXFLAGS) -c main.cpp
part.o: part.cpp part.h
	$(CXX) $(CXXFLAGS) -c part.cpp
controller.o: controller.cpp controller.h
	$(CXX) $(CXXFLAGS) -c controller.cpp
arm.o: arm.cpp arm.h	
	$(CXX) $(CXXFLAGS) -c arm.cpp

clean:
	-rm -f *.o *~ a.out
