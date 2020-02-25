//Unit7_Jimenez_Task_2 Dr_T 2-24-2020
#include <iostream>
#include "appDate.h"
#include "timeOfDay.h"
#include "event.h"

using namespace std;
void createEvent(timeOfDay t, appDate a, event e)
{
  short h = 0, m = 0, s = 0;
  short mo = 0, d = 0;
  int y = 0, decision = 0;
  string urgent = "";
  string eName = "";
  
  //Populate timeOfDay
  cout << "Enter Hour: ";
  cin >> h;
  t.hour = h;

  cout << "Enter Minutes: ";
  cin >> m;
  t.minute = m;

  cout << "Enter Seconds: ";
  cin >> s;
  t.second = s;

  //Populate the appDate
  cout << "Enter Month: ";
  cin >> mo;
  a.month = mo;

  cout << "Enter Day: ";
  cin >> d;
  a.dayOfMonth = d;

  cout << "Enter Year: ";
  cin >> y;
  a.year = y;

  //Set Event Details
  cout << "Enter Event Name: ";
  cin >> eName;
  e.eventName = eName;

  cout << "Is the event urgent? (1 = yes, 2 = no: )";

  cin >> decision;
  if(decision == 1)
  {
    e.isUrgent = true;
    urgent = "yes";
  }

  else if(decision == 2)
  {
    e.isUrgent = false;
    urgent = "no";
  }
  else
  {
    cout << "Invalid input";
  }

  e.eventDate = a;

  e.eventTime = t;
  
  //Print the event
  cout << "\nEVENT DETAILS: " << endl;
  cout << "Event name: " + e.eventName << endl;
  cout << &"\nIs urgent: " [+ e.isUrgent] << "-->" << urgent << endl;
  cout << e.toString(); 

}

int main() 
{
  event eMain;
  timeOfDay tMain;
  appDate dMain;
  createEvent(tMain, dMain, eMain);

  return 0;

}