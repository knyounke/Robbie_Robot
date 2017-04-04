#include "controller.h"
#include "robot_model.h"

using namespace std;


	void Controller::createPart() {}
	void Controller::printParts() {}
	void Controller::createModel() {}
	void Controller::printModels() {}
	void Controller::editPart() {}
	void Controller::editModel() {}

	void Controller::menu()
	{
	
	int choice;
	 cout<< "What would you like to do?" << endl;
	 cout<< "1) Create a Robot Part" << endl;
         cout<< "2) Create a Robot Model" << endl;
	 cout<< "3) List all Robot Parts" << endl;
	 cout<< "4) List all Robot Models" << endl;
	 cout<< "5) Edit an existing part" << endl;
	 cout<< "6) Edit an existing Model" << endl;
	 cout<< "7) Exit" << endl;
	 cin >> choice;

	switch(choice)
	{
	case 1:
	     createPart();
		break;
	case 2:
	     createModel();
		break;
	case 3:
	     printParts();
		break;
	case 4:
	     printModels();
		break;
	case 5:
	     editPart();
		break;
	case 6:
	     editModel();
		break;
	case 7:
		return;
	default:
		cout << "Error: Please choose a number 1 through 7." << endl;

	}


	};


