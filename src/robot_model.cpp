#include "robot_model.h"



Robot_Model::Robot_Model(string n, double p) : name{n}, price{p} { };

double Robot_Model::get_Parts_Total_Cost()
{

return price;
};

string Robot_Model::get_Name()
{

return name;
};


void Robot_Model::set_Name(string n)
{
	name = n;
};

void Robot_Model::set_Price(double p)
{

price = p;
};


double Robot_Model::get_Price()
{

return price;
};

void Robot_Model::set_Torso(int n)
{

torso = n;

};


void Robot_Model::set_Battery1(int n)
{

battery1 = n;

};

void Robot_Model::set_Battery2(int n)
{

battery2 = n;
};

void Robot_Model::set_Arm1(int n)
{
arm1 = n;
};

void Robot_Model::set_Arm2(int n)
{
arm2 = n;
};

void Robot_Model::set_Head(int n)
{
head = n;
};

void Robot_Model::set_Locomotor(int n)
{
locomotor = n;
};
	
int Robot_Model::get_Torso()
{
return torso;
};

int Robot_Model::get_Battery1()
{
return battery1;
};

int Robot_Model::get_Battery2()
{
return battery2;
};
	
int Robot_Model::get_Arm1()
{
return arm1;
};


int Robot_Model::get_Arm2()
{

return arm2;
};

int Robot_Model::get_Head()
{
return head;
};

int Robot_Model::get_Locomotor()
{

return locomotor;
};

void save_model()
{


}
