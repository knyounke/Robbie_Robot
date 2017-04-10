#ifndef ___CONTROLLER_H
#define ___CONTROLLER_H 2017

#include "shop.h"
#include "battery.h"
#include "part.h"
#include "locomotor.h"
#include "robot_model.h"
#include "torso.h"
#include "arm.h"
#include "head.h"

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


