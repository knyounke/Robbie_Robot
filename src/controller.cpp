#include "controller.h"
#include "shop.h"
#include "battery.h"
#include "part.h"
#include "locomotor.h"
#include "robot_model.h"
#include "torso.h"
#include "arm.h"
#include "head.h"

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
	void Controller::printParts(int t) 
	{
/*
	vector< vector<Part> > vectorOfParts = Shop.robotParts;
        vector<Torso> torsos = vectorOfParts[0];
        vector<Head> heads = vectorOfParts[1];
        vector<Arm> arms = vectorOfParts[2];
        vector<Locomotor> locomotors = vectorOfParts[3];
        vector<Battery> batteries = vectorOfParts[4];

	string name;
	switch(t){
                case 0: 
                    name = "Torsos";
                    break;
                case 1:
                    name = "Heads";
                    break;
                case 2:
                    name = "Arms";
                    break;
                case 3:
                    name = "Locomotors";
                    break;
                case 4:
                    name = "Batteries";
                    break;
                default:
                 	cout<< "Unknown category." << endl;
                    return;
            }
            
 		cout << name << ": " << endl;
             cout << "Part Number, Name, Price, Description" << endl;
            for(int j = 0; j < vectorOfPart<t>.size; j++)
            {
                if(vectorOfParts[t][j] != null){
                cout << vectorOfParts[t][j].getPartNumber() << ", " <<
                cout << vectorOfParts[t][j].getName() << ", " <<
                cout << vectorOfParts[t][j].getDescription() << ", " << 
                cout << vectorOfParts[t][j].getPrice() << endl;
        
                }
            }
	  */

	}
	void Controller::createModel() 
	{
 /*
	vector< vector<Part> > vectorOfParts = Shop.robotParts;
        vector<Torso> torsos = Shop.getTorsoVector();
        vector<Head> heads = Shop.getHeadVector();
        vector<Arm> arms = Shop.getArmVector();
        vector<Locomotor> locomotors = Shop.getLocomotorVector();
        vector<Battery> batteries = Shop.getBatteryVector();
   
        string modelName;
	cout << "Enter a name for this model: " << endl;
	cin.ignore();
	getline(cin, modelName);
	
	//show options of parts
	cout << "Available Torsos: " << endl;
	printParts(0);

	cout <<"Available Heads: " << endl;
	printParts(1);

	cout <<"Available Arms: " << endl;
	printParts(2);

	cout <<"Available Batteries: " << endl;
	printParts(4);
	
	cout <<"Available Locomotors: " << endl;
	printParts(3);
*/
	}
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
	      printParts(0);
		printParts(1);
		printParts(2);
		printParts(3);
		printParts(4);
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


