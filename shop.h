#ifndef ___SHOP_H
#define ___SHOP_H 2017


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Shop
{

	
	
public:
	
	int armcount = 0;
	int torsocount = 0;
	int locomotorcount = 0;
	int headcount = 0;
	int batterycount = 0;
	int associatecount = 0;
	int ordercount = 0;
	int customercount = 0;
	int modelcount = 0;
	vector<Arm> arms;
	vector<Head> heads;
	vector<Locomotor> locomotors;
	vector<Battery> batteries;
	vector<Torso> torsos;
	vector<Robot_Model> models;
	vector<Sales_Associate> associates;
	vector<Customer> customers;
	vector< vector <Part*> > robotParts;

	Shop() {}
	void createTorso(string n, double p, string d);
	void createBattery(string n, double p, string d);
	void createHead(string n, double p, string d);
	void createArm(string n, double p, string d);
	void createLocomotor(string n, double p, string d);
	void printVectors(int t);

};

#endif
