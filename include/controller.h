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
		
	int choice = 0;
	void menu();
	void createPart();
	void printParts();
	void createModel();
	void printModels();
	void editPart();
	void editModel();


};

#endif


