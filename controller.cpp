#include <string>
#include <vector>
#include <exception>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Menu_Bar.H>
#include <iostream>

#include "head.h"
#include "torso.h"
#include "locomotor.h"
#include "battery.h"
#include "arm.h"
#include "customer.h"
#include "part.h"
#include "robot_model.h"
#include "order.h"
#include "sales_associate.h"
#include "shop.h"


using namespace std;

// PARTS IMPLEMENTATION

    //getters
   	string const Part::getName()
    	{
           return _name;
    	}
    
   	int const Part::getNumberOfParts()
    	{
           return _numberOfParts;
    	}
    
    	int const Part::getPartNumber()
    	{
          return _partNumber;
    	}
    
    	string const Part::getDescription()
        {
           return _description;
        }

        string const Part::getType()
	{
           return _type;
    	}

    	double const Part::getPrice()
	{
           return _price;
    	}
    
   //setters
        void Part::setName(string name)
       {
        _name = name;
       }
    
    	void Part::setPartNumber(int partNumber)
	{
           _partNumber = partNumber;
    	}
    
    	void Part::setType(string type)
	{
           _type = type;
    	}
   
   	void Part::setPrice(double price)
	{
          _price = price;
   	}
    
    	void Part::setDescription(string description)
	{
       	   _description = description;
        }

    
    	void Part::addParts()
	{
           _numberOfParts++;
        }


//SHOP IMPLEMENTATION

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



 const int X = 640;
 const int Y = 200;
 Fl_Window win(X,Y, "Robbie Robot Shop");



class View {
  public:
    View(Shop& _shop) : shop{_shop} { }
   //string get_menu();
    string get_part_list();
    void list_parts();
   /* string get_age_list();
    string get_genre_list();
    string get_media_list();
    string get_help(); */
  private:
    Shop& shop;
};

class Controller {
  public:
    Controller (Shop& _shop, View& view) : shop(_shop), view(view) { }
    void execute_cmd(int cmd);
  private:
    int get_int(string title, string prompt, int max_int);
    string get_string(string title, string prompt);
    Shop& shop;
    View& view;
};

  Shop shop;
  View view{shop};
  Controller controller(shop, view);



string View::get_part_list() {
  string list = R"(
----------------------------
Types of Parts
----------------------------
1) Head
2) Torso
3) Battery
4) Arm
5) Locomotor 

)";
  return list;
}

void View::list_parts()
{
string parts, list;

list += "-----Heads-----\n\n";
  for (int i=0; i<shop.headcount; ++i) {
    list += std::to_string(i) + ") " + shop.heads[i].Part::_name + '\n';
  }


list += "-----Torsos-----\n\n";
  for (int i=0; i<shop.torsocount; ++i) {
    list += std::to_string(i) + ") " + shop.torsos[i].Part::_name + '\n';
  }


list += "-----Batteries-----\n\n";
  for (int i=0; i<shop.batterycount; ++i) {
    list += std::to_string(i) + ") " + shop.batteries[i].Part::_name + '\n';
  }


list += "-----Locomotors-----\n\n";
  for (int i=0; i<shop.locomotorcount; ++i) {
    list += std::to_string(i) + ") " + shop.locomotors[i].Part::_name + '\n';
  }


list += "-----Arms-----\n\n";
  for (int i=0; i<shop.armcount; ++i) {
    list += std::to_string(i) + ") " + shop.arms[i].Part::_name + '\n';
  }





    fl_message_title("Robot Parts");
    fl_message_icon()->label("P");
    fl_message(list.c_str());

}

//callback functions


void CloseCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void AddPartCB(Fl_Widget *w, void * p) {
controller.execute_cmd(1);
}

void AddModelCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void AddCustomerCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void AddSalesAssociateCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void SaveCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void OpenCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void ListPartsCB(Fl_Widget *w, void * p) {
view.list_parts();
}


Fl_Menu_Bar * menubar;

  Fl_Menu_Item menuitems[] = {
{"&File", 0,0,0, FL_SUBMENU},
  {"&Quit", FL_ALT + 'q', (Fl_Callback*)CloseCB},  {"&Save Shop", FL_ALT + 'q', (Fl_Callback*)SaveCB},  {"&Open Shop", FL_ALT + 'q', (Fl_Callback*)OpenCB},
  { 0 },
{"&Add...", 0,0,0, FL_SUBMENU},
  { "&Robot Part", FL_ALT + 'A', (Fl_Callback*)AddPartCB}, {"&Robot Model...", FL_ALT + 'L', (Fl_Callback*)AddModelCB}, {"&Customer...", FL_ALT + 'O', (Fl_Callback*)AddCustomerCB}, {"&Sales Associate...", FL_ALT + 'O', (Fl_Callback*)AddSalesAssociateCB}, {0},
{"&List All...", 0, 0, 0, FL_SUBMENU},
 {"&Robot Parts...", FL_ALT + 'd', (Fl_Callback*)ListPartsCB}, {"&Robot Models...", FL_ALT + 'l', (Fl_Callback*)CloseCB}, {"&Customers...", FL_ALT + 'l', (Fl_Callback*)CloseCB},  {"&Sales Associates...", FL_ALT + 'l', (Fl_Callback*)CloseCB}, 
{0},
{ 0 }

};






int Controller::get_int(string title, string prompt, int max_int) {
  string error = "Please enter an integer between 0 and " + max_int;
  int result;
  while(true) {
    fl_message_title(title.c_str());
    fl_message_icon()->label("I");
    result = atoi(fl_input(prompt.c_str(), 0));
    if (0 <= result && result <= max_int) break;
    fl_message_title("Invalid input");
    fl_message_icon()->label("!");
    fl_message(error.c_str());
  }
  return result;
}

string Controller::get_string(string title, string prompt) {
  fl_message_title(title.c_str());
  fl_message_icon()->label("S");
  string result{fl_input(prompt.c_str(), 0)};
  return result;
}


void Controller::execute_cmd(int cmd) {
  if (cmd == 1)
 { // Add Robot Part
    string name, description,price;
	int type;
	double price2;

    type = get_int("Part",view.get_part_list()+"Type? ", 5);
    name = get_string("Part Name", "Name? ");

    price = get_string(name, "Price? ");

    description = get_string(name, "Description? ");

	price2 = stod(price);

   if(type == 1){Controller::shop.createHead(name, price2 , description); }
  else if(type == 2){Controller::shop.createTorso(name, price2, description);}
  else if(type == 3){Controller::shop.createBattery(name, price2, description);}
   else if (type == 4){Controller::shop.createArm(name, price2, description);}
   else if(type == 5){Controller::shop.createLocomotor(name, price2, description);}

 }  
   else 
   {
   string error = "**** Invalid command - type 9 for help";
   fl_message_title("ERROR"); 
   fl_message_icon()->label("!");
   fl_message(error.c_str());
   }
}

int main() {

  fl_register_images();
  menubar = new Fl_Menu_Bar(0,0,X,30);
  menubar->menu(menuitems);
  win.resizable(NULL);
  win.color(FL_WHITE);
  win.end();
  win.show();
 
  

return (Fl::run());

}


