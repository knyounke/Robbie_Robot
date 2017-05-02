#ifndef ROBOT_MODEL__H
#define ROBOT_MODEL_ 2017
#include <string>

using namespace std;

class Robot_Model 
{
	private:
	
	int model_num;

	int head;
	int torso;
	int battery;
	int arm;
	int locomotor;


	public:

	string name;
	
	string description;
	double price;

	Robot_Model(string n, int torso, int head, int battery,int locomotor, int arm);
	double get_Parts_Total_Cost();
	void set_Name(string n);
	string get_Name();
	void setPrice(double p);
        void setDescription(string s);
	 string getDescription();
	double getPrice();
	void set_Torso(int n);
	void set_Battery(int n);
	void set_Arm(int n);
	void set_Head(int n);
	void set_Locomotor(int n);
	int get_Torso();
	int get_Battery();
	int get_Arm();
	int get_Head();
	int get_Locomotor();


};

#endif
