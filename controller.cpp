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





 const int X = 640;
 const int Y = 200;
 Fl_Window win(X,Y, "Robbie Robot Shop");

//callback functions


//callback functions


void CloseCB(Fl_Widget *w, void * p) {
win.hide(); 
}

void AddPartCB(Fl_Widget *w, void * p) {
win.hide(); 
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



Fl_Menu_Bar * menubar;

  Fl_Menu_Item menuitems[] = {
{"&File", 0,0,0, FL_SUBMENU},
  {"&Quit", FL_ALT + 'q', (Fl_Callback*)CloseCB},  {"&Save Shop", FL_ALT + 'q', (Fl_Callback*)SaveCB},  {"&Open Shop", FL_ALT + 'q', (Fl_Callback*)OpenCB},
  { 0 },
{"&Add...", 0,0,0, FL_SUBMENU},
  { "&Robot Part", FL_ALT + 'A', (Fl_Callback*)AddPartCB}, {"&Robot Model...", FL_ALT + 'L', (Fl_Callback*)AddModelCB}, {"&Customer...", FL_ALT + 'O', (Fl_Callback*)AddCustomerCB}, {"&Sales Associate...", FL_ALT + 'O', (Fl_Callback*)AddSalesAssociateCB}, {0},
{"&List All...", 0, 0, 0, FL_SUBMENU},
 {"&Robot Parts...", FL_ALT + 'd', (Fl_Callback*)CloseCB}, {"&Robot Models...", FL_ALT + 'l', (Fl_Callback*)CloseCB}, {"&Customers...", FL_ALT + 'l', (Fl_Callback*)CloseCB},  {"&Sales Associates...", FL_ALT + 'l', (Fl_Callback*)CloseCB}, 
{0},
{ 0 }

};




class View {
  public:
    View(Part& rps, Robot_Model& rms) : _rps{rps}, _rms{rms} { }
   /* string get_menu();
    string get_publication_list();
    string get_patron_list();&
    string get_age_list();
    string get_genre_list();
    string get_media_list();
    string get_help(); */
  private:
    Part& _rps;
    Robot_Model& _rms;
};



class Controller {
  public:
    Controller (Shop& shop, View& view) : shop(shop), view(view) { }
    void execute_cmd(int cmd);
  private:
    int get_int(string title, string prompt, int max_int);
    string get_string(string title, string prompt);
    Shop& shop;
    View& view;
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


