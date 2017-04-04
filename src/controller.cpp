#include "controller.h"
#include "robot_model.h"

using namespace std;

	void Controller::newBattery() 
	{

	string bname;
	string bdescription;
	double bprice;


	cout << "----Create Battery----" << endl;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, bname);

	cout << "Enter price: " << endl;
	cin >> bprice;
		if(bprice < 0)
		cout << "Invalid price. Cannot be negative." << endl;
	cout << "Description: " << endl;
	cin.ignore();
	getline(cin, bdescription);
	
	
	}

	void Controller::newTorso() 
	{


	string tname;
	string tdescription;
	double tprice;


	cout << "----Create Torso----" << endl;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, tname);

	cout << "Enter price: " << endl;
	cin >> tprice;
		if(tprice < 0)
		cout << "Invalid price. Cannot be negative." << endl;

	cout << "Description: " << endl;
	cin.ignore();
	getline(cin, tdescription);
	
	}


	void Controller::newHead() 
	{

	

	string hname;
	string hdescription;
	double hprice;


	cout << "----Create Head----" << endl;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, hname);

	cout << "Enter price: " << endl;
	cin >> hprice;
		if(hprice < 0)
		cout << "Invalid price. Cannot be negative." << endl;

	cout << "Description: " << endl;
	cin.ignore();
	getline(cin, hdescription);
	}

	void Controller::newArm()
	 {
	
	

	string aname;
	string adescription;
	double aprice;


	cout << "----Create Arm----" << endl;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, aname);

	cout << "Enter price: " << endl;
	cin >> aprice;
		if(aprice < 0)
		cout << "Invalid price. Cannot be negative." << endl;

	cout << "Description: " << endl;
	cin.ignore();
	getline(cin, adescription);


	}

	void Controller::newLocomotor() 
	{

	
	

	string lname;
	string ldescription;
	double lprice;


	cout << "----Create Locomotor----" << endl;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, lname);

	cout << "Enter price: " << endl;
	cin >> lprice;
		if(lprice < 0)
		cout << "Invalid price. Cannot be negative." << endl;

	cout << "Description: " << endl;
	cin.ignore();
	getline(cin, ldescription);


	}



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


