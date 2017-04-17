#include "CLI_View.h"


#include <string>
#include <iostream>
#include <stdlib.h>

void View::createPartMenu()
{



}

void View::createModelMenu()
{


}

void View::newArmMenu()
{


}

void View::newHeadMenu()
{


	cout << "----Create Head----" << endl;

}

void View::newTorsoMenu()
{


	cout << "----Create Torso----" << endl;
}

void View::newLocomotorMenu()
{


}

void View::newBatteryMenu()
{

cout << "----Create Battery----" << endl;

}

void View::listParts()
{


}


	
void View::listModels()
{


}

string View::getName()
{
  string name;
  
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, name);

return name;


}

double  View::getPrice()
{

   double price;
	cout << "Enter price: " << endl;
	cin >> price;
	if(price < 0)
		cout << "Invalid price. Cannot be negative." << endl;

   return price;
}
	

string  View::getDescription()
{
	string description;

	cout << "Description: " << endl;
	cin.ignore();
	getline(cin, description);
} 
