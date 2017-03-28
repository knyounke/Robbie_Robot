#ifndef ___CONTROLLER_H
#define ___CONTROLLER_H 2017
#include "part.h"

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Controller
{
   public:	
	vector<Part> partsList;
	int choice = 0;
	void menu();
	void createPart();
	void printParts(vector<Part> list);


};

#endif


