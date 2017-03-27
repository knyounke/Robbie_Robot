#Makefile for Robbie Robot
CXXFLAGS += --std=c++11


all: main

rebuild: clean main

main: main.o part.o
	$(CXX) $(CXXFLAGS) main.o part.o
main.o: main.cpp part.h
	$(CXX) $(CXXFLAGS) -c main.cpp
part.o: part.h 
	$(CXX) $(CXXFLAGS) -c part.cpp

clean:
	-rm -f *.o *~ a.out
