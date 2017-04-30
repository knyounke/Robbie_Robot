#include "shop.h"


	void Shop::createTorso(string n, double p, string d) 
	{
		Torso * T = new Torso();
		T->setName(n);
		T->setPrice(p);
		T->setDescription(d);

		torsos.push_back(*T);
		torsocount++;
		

	};

	void Shop::createBattery(string n, double p, string d) 
	{
		Battery * B = new Battery();
		B->setName(n);
		B->setPrice(p);
		B->setDescription(d);

		batteries.push_back(*B);
		batterycount++;

	};

	void Shop::createHead(string n, double p, string d)
	{

		Head *  H = new Head();
		H->setName(n);
		H->setPrice(p);
		H->setDescription(d);

		heads.push_back(*H);
		headcount++;

	};

	void Shop::createArm(string n, double p, string d)
	{


		Arm * A = new Arm();
		A->setName(n);
		A->setPrice(p);
		A->setDescription(d);

		arms.push_back(*A);
		armcount++;

	};

	void Shop::createLocomotor(string n, double p, string d)
	{


		Locomotor * L = new Locomotor();
		L->setName(n);
		L->setPrice(p);
		L->setDescription(d);

		locomotors.push_back(*L);
		locomotorcount++;

	}

	void Shop::printVectors(int t)
	{

	string name;
	int j;
	
	switch(t){
                case 0: 
                    name = "Torsos";
				cout << name << ": " << endl;
            		 cout << "Part Number, Name, Price, Description" << endl;
           	while(j < torsocount)
		{
		
		j++;
		}
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
		case 5:
			cout << "Exiting." << endl;
			break;
                default:
                 	cout<< "Unknown category." << endl;
                    return;
            }
            
 	
         }  



