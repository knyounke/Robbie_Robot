#ifndef ___ROBOT_MODEL__H
#define ___ROBOT_MODEL_ 2017
#include "part.h"
#include "controller.h"
#include "arm.h"
#include "torso.h"
#include "head.h"
#include "locomotor.h"
#include "battery.h"
#include <string>

using namespace std;

class Robot_Model 
{
	private:
	
	string name;
	int model_num;
	double price;
	int head;
	int torso;
	int battery1;
	int battery2;
	int arm1;
	int arm2;
	int locomotor;


	public:

	Robot_Model(){}
	Robot_Model(string n, double p) :  name{n}, price{p}, model_num{model_num++} { }
	double get_Parts_Total();
	void set_Name(string name);
	string get_Name();
	void set_Price(double p);
	double get_Price();
	void set_Torso(int n);
	void set_Battery1(int n);
	void set_Battery2(int n);
	void set_Arm1(int n);
	void set_Arm2(int n);
	void set_Head(int n);
	void set_Locomotor(int n);
	int get_Torso();
	int get_Battery1();
	int get_Battery2();
	int get_Arm1();
	int get_Arm2();
	int get_Head();
	int get_Locomotor();


}
