#Makefile for Robbie Robot
CXXFLAGS = -std=c++11


all: main.o part.o


part.o: part.cpp part.h 
	$(CXX) $(CXXFLAGS) -c part.cpp
main.o: main.cpp part.h
	$(CXX) $(CXXFLAGS) -c main.cpp
clean:
	-rm -f *.o *~ a.out
