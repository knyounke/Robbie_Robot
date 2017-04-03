#ifndef ___CONTROLLER_H
#define ___CONTROLLER_H 2017
#include "part.h"

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Controller
{
   public:	
	vector<Part> partsList;
	int choice = 0;
	void menu()
	{
		int choice;
	 cout<< "What would you like to do?" << endl;
	 cout<< "1) List all Robot Parts." << endl;
         cout<< "2) Create a new Robot Part." << endl;
	 cin >> choice;


	};
	void createPart();
	void printParts(vector<Part> list);


};

#endif


