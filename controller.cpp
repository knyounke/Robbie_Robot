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


void CloseCB(Fl_Widget *w, void * p) {
win.hide(); 

}




Fl_Menu_Bar * menubar;

  Fl_Menu_Item menuitems[] = {
{"&File", 0,0,0, FL_SUBMENU},
  {"&Quit", FL_ALT + 'q', (Fl_Callback*)CloseCB},
  { 0 },
{"&Add...", 0,0,0, FL_SUBMENU},
  { "&Robot Part", FL_ALT + 'A', (Fl_Callback*)CloseCB}, {"&Robot Model...", FL_ALT + 'L', (Fl_Callback*)CloseCB}, {"&Customer...", FL_ALT + 'O', (Fl_Callback*)CloseCB}, {"&Sales Associate...", FL_ALT + 'O', (Fl_Callback*)CloseCB}, {0},
{"&Robot Parts", 0, 0, 0, FL_SUBMENU},
 {"&Add...", FL_ALT + 'd', (Fl_Callback*)CloseCB}, {"&List All...", FL_ALT + 'l', (Fl_Callback*)CloseCB}, 

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


