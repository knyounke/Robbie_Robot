#include "controller.h"
#include "robot_model.h"

using namespace std;

	void Controller::newBattery() {}
	void Controller::newTorso() {}
	void Controller::newHead() {}
	void Controller::newArm() {}
	void Controller::newLocomotor() {}



	void Controller::createPart()
	 {
		
		int choice;
		cout << "What would you like to create?" << endl;
		cout << "1) New Head" << endl;
		cout << "2) New Arm" << endl;
		cout << "3) New Torso" << endl;
		cout << "4) New Battery" << endl;
		cout << "5) New Locomotor"<< endl;
		cout << "6) Exit" << endl;
		cin >> choice;

	
	switch(choice)
	{
		case 1:
			newHead();
			break;
		case 2:
			newArm();
			break;
		case 3:
			newTorso();
			break;
		case 4:
			newBattery();
			break;
		case 5:
			newLocomotor();
			break;
		case 6:
			return;
		
		default:
			cout << "Error. Please enter a correct number 1 through 6." << endl;

	} 

		
	
	}
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


