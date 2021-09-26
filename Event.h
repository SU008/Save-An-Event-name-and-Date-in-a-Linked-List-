#ifndef EVENT
#define EVENT
#define SIZEOFEVENT 50




#define Event_DECONSTRUCTOR
//#define Event_DEBUG

#include "Date.h"
#include <stdio.h>
#include <iostream>

using namespace std; 

class Event
{
public: 
	Event(void);
	Event( Date anEventDate, char* anEventName);
	~Event();




	void askUserEventDetails();
        

        void setTheEventDetails( Date anEventDate, char* anEventName);

        void displayAllEvent();
 



protected: 
	 Date  theEventDate;
         char    theEventName [ SIZEOFEVENT ];


private:

};



inline Event :: Event(void)                                           //default
{
	
	strcpy_s(theEventName, "My First Event");


#ifdef Event_DEBUG
	cout << "\nDEBUG:Default constructor[Event]: The name of the event is "<<theEventName << endl;	
	cout << "DEBUG:Regular constructor[Event]: The Date is ";
	theEventDate.setDate(5,6,1999);

#endif
}



inline Event :: Event(Date anEventDate, char* anEventName) // Regular Constructor
	     : theEventDate(anEventDate)//initalisation list
{
	
	strcpy_s(theEventName, anEventName);

#ifdef Event_DEBUG
	cout << "DEBUG:Regular constructor[Event]: The name is "<<theEventName << endl;
	cout << "DEBUG:Regular constructor[Event]: The Date is ";
	theEventDate.displayALLDate();
#endif
}

inline Event :: ~Event()
{
#ifdef Event_DECONSTRUCTOR
	cout << "DEBUG:Deconstructor[Event]: The name is "<<theEventName << endl;
	cout << "DEBUG:Deconstructor[Event]: The Date is ";
	theEventDate.displayALLDate();
#endif
}


inline void Event :: askUserEventDetails()
{
	 
         cout << "DEBUG:askUserEventDetails[Event]: Enter the Event name =>";
	 cin.getline(theEventName,SIZEOFEVENT,'\n');

	 cout << "DEBUG:askUserEventDetails[Event]:";
	 theEventDate.askTheDate();
}



inline void Event :: setTheEventDetails( Date anEventDate, char* anEventName)
{

	strcpy_s(theEventName, anEventName);

	theEventDate = anEventDate;

	cout << "\nDEBUG:setTheEventDetails[Event]: The set event name is "<<theEventName << endl;
	cout << "DEBUG:setTheEventDetails[Event]: The set event Date is ";
	theEventDate.displayALLDate();

}

inline void Event::displayAllEvent()
{

	cout << "\nDEBUG:displayAllEvent[Event]: The  name is "<<theEventName << endl;
	cout << "DEBUG:displayAllEvent[Event]: The  Date is ";
	theEventDate.displayALLDate();

}



#endif