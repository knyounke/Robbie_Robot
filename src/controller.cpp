#include "controller.h"


using namespace std;

	void Controller::newBattery() 
	{

	string bname;
	string bdescription;
	double bprice;

	v.newBatteryMenu();
	bname= v.getName();
	bprice = (v.getPrice());
	bdescription = v.getDescription();

	s.createBattery(bname, bprice, bdescription);
	
	
	}

	void Controller::newTorso() 
	{


	string tname;
	string tdescription;
	double tprice;

	v.newTorsoMenu();
	tname = v.getName();
	tprice = v.getPrice();
	tdescription = v.getDescription();
	
	s.createTorso(tname, tprice, tdescription);
	}


	void Controller::newHead() 
	{

	

	string hname;
	string hdescription;
	double hprice;

	v.newHeadMenu();
	hname = v.getName();
	hprice = v.getPrice();
	hdescription = v.getDescription();

	s.createHead(hname, hprice, hdescription);
	}

	void Controller::newArm()
	 {
	
	

	string aname;
	string adescription;
	double aprice;


	v.newArmMenu();
	aname = v.getName();
	aprice = v.getPrice();
	adescription = v.getDescription();

	s.createArm(aname, aprice, adescription);

	}

	void Controller::newLocomotor() 
	{

	string lname;
	string ldescription;
	double lprice;

	v.newLocomotorMenu();
	lname = v.getName();
	lprice = v.getPrice();
	ldescription = v.getDescription();

	s.createLocomotor(lname, lprice, ldescription);
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
			Controller::menu();
			break;
		case 2:
			newArm();
			Controller::menu();
			break;
		case 3:
			newTorso();
			Controller::menu();
			break;
		case 4:
			newBattery();
			Controller::menu();
			break;
		case 5:
			newLocomotor();
			Controller::menu();
			break;
		case 6:
			return;
		
		default:
			cout << "Error. Please enter a correct number 1 through 6." << endl;
			

	} if (choice < 1 || choice > 6) { Controller::createPart();}

		
	
	}
	void Controller::printParts(int t) 
	{

	 {
		
		int choice;
		cout << "What would you like to view?" << endl;
		cout << "0) Torsos" << endl;
		cout << "1) Heads" << endl;
		cout << "2) Ams" << endl;
		cout << "3) Locomotors" << endl;
		cout << "4) Batteries"<< endl;
		cout << "5) Exit" << endl;
		cin >> choice;

		s.printVectors(choice);

 	
            } 
	

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


