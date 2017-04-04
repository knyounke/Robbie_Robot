#ifndef ___CONTROLLER_H
#define ___CONTROLLER_H 2017
#include "part.h"
#include "robot_model.h"
#include "torso.h"
#include "arm.h"
#include "head.h"
#include "locomotor.h"
#include <iostream>
#include <string>
#include <vector>

#include "battery.h"
class Shop
{

private:
	vector<Arm> arms;
	vector<Head> heads;
	vector<Locomotor> locomotors;
	vector<Battery> batteries;
	vector<Torso> torsos;
	vector< vector <Part> > robotParts;

	int armcount = 0;
	int torsocount = 0;
	int locomotorcount = 0;
	int headcount = 0;
	int batterycount = 0;


public:

	void createTorso(string n, double p, string d);
	void createBattery(string n, double p, string d);
	void createHead(string n, double p, string d);
	void createArm(string n, double p, string d);
	void createLocomotor(string n, double p, string d);

	





};

#endif
