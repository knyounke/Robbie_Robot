#include "controller.h"


using namespace std;


	void menu()
	{
	 cout<< "What would you like to do?" << endl;
	 cout<< "1) List all Robot Parts." << endl;
         cout<< "2) Create a new Robot Part." << endl;
	 cin >> choice;

	switch(choice)
	{
	   case 1:
		{
		printParts(partsList);
		break;
		}
	   case 2:
		{
		createPart();
		break;
		}
	   default:
		cout<<"Sorry. That is not a valid number. Try again." << endl;


	}

	}
