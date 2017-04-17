#ifndef __CLI__VIEW__H__
#define __CLI_VIEW__2017_

#include <iostream>
#include <stdlib.h>

#include <string>

using namespace std;

class View
{
  public:
	void createPartMenu();
	void createModelMenu();
	void newArmMenu();
	void newHeadMenu();
	void newTorsoMenu();
	void newLocomotorMenu();
	void newBatteryMenu();
	string getName();
	double getPrice();
	string getDescription();
	void listParts();
	void listModels();
	
};

#endif
