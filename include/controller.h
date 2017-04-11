#ifndef ___CONTROLLER_H
#define ___CONTROLLER_H 2017

#include "part.h"
#include "shop.h"

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Controller
{
   protected:
	Shop s;
   public:	
		
	int choice = 0;
	void menu();
	void createPart();
	void printParts(int t);
	void createModel();
	void printModels();
	void editPart();
	void editModel();
	void newBattery();
	void newTorso();
	void newHead();
	void newArm();
	void newLocomotor();
	
};

#endif


