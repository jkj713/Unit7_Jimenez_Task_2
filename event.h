//Unit7_Jimenez_Task_2
//Event

#ifndef event_h
#define event_h
#include<sstream>

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;

  string toString()
  {
    short dayOfMonth = eventDate.dayOfMonth;
    short month = eventDate.month;
    int year = eventDate.year;
    short hour = eventTime.hour;
    short minute = eventTime.minute;
    short second = eventTime.second;

    stringstream ss;
    ss << month << "/" << dayOfMonth << "/" << year;

    stringstream ss2;
    ss2 << hour << ":" << minute << ":" << second;

    string date = ss.str();
    string time = ss2.str();
    
    return ("Date: " + date + "\nTime: " + time);
  }

};

ostream& operator << (ostream& outs, event* obj)
{
  return outs << obj->toString();
}
#endif