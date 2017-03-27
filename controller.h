#ifndef ___CONTROLLER_H
#define ___CONTROLLER_H 2017

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Controller
{

   private:
	vector<Part> partsList;
	int choice;
	   

   public:	

	void menu();
	void createPart();
	void printParts(vector<Part> list);


};

#endif


