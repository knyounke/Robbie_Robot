#ifndef ROBOT_MODEL__H
#define ROBOT_MODEL_ 2017
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

	Robot_Model(string n, double p);
	double get_Parts_Total_Cost();
	void set_Name(string n);
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


};

#endif
