#ifndef EVENTNODE
#define EVENTNODE

//#define EVENTNODEDEBUG

#define SIZEOFEVENTNAME	30

#include <string.h>
#include <iostream>
#include "Event.h"



using namespace std;


class EventNode :public Event
{
public:
		EventNode (void);
		EventNode (Date anEventDate, char* anEventName); 
			// only set attributes of the event 
			// use setNextNodePtr to set pointer values

		~EventNode (void);

		void setEventNode (Date anEventDate, char* anEventName);

		void setTheNextEventNodePtr ( EventNode* aNextEventNodePtr);
		void displayEventNodeDetails();

		void addEventNode(void);

		EventNode*    getTheNextEventNodePtr (void);
protected:
	        EventNode* theNextEventNodePtr;

	
private:

};


inline EventNode::EventNode(void)                             	
{
	// Default constructor for Event and Date runs
	//So do not need to set default for Date or Event
	// Could change by using theDateofEvent.setDate(x,y,z) 

	
	theNextEventNodePtr = NULL ;
	

#ifdef EVENTNODEDEBUG
	cout << "DEBUG from EventNode Default Constructor "<<endl;
	cout << "Event Name is "<< theEventName << endl;
	cout << "Event Date is ";
	theEventDate.displayALLDate();
	cout << "The NextEventNodePtr points at " << theNextEventNodePtr << endl;

#endif
}




inline EventNode::EventNode (Date anEventDate, char* anEventName)    //Regular
{
	theEventDate = anEventDate;
	strcpy_s ( theEventName, anEventName);

	theNextEventNodePtr = NULL;

#ifdef EVENTNODEDEBUG
	cout << "\nDEBUG from EventNode Regular Constructor "<<endl;
	cout << "Event Name is "<< theEventName << endl;
	cout << "Event Date is " ;
	theEventDate.displayALLDate();
	cout << "The NextEventNodePtr points at " << theNextEventNodePtr << endl;

#endif
}




inline EventNode::~EventNode(void)                          //Deconstructor
{
	cout << "\nDEBUG from EventNode Destructor "<<endl;
	cout << "Event Name is "<< theEventName << endl;
	cout << "Event Date is " ;
	theEventDate.displayALLDate();
	cout << "The NextEventNodePtr points at " << theNextEventNodePtr << endl;
}


inline EventNode*  EventNode::getTheNextEventNodePtr ( void)   //get the pointer
{
	return theNextEventNodePtr;
}

inline void EventNode::setTheNextEventNodePtr ( EventNode* aNextEventNodePtr) //set the next pointer
{
	theNextEventNodePtr = aNextEventNodePtr;

	cout << "\nDEBUG from [setTheNextEventNodePtr] The theNextEventNodePtr points at " << theNextEventNodePtr << endl;
}

inline void EventNode::setEventNode (Date anEventDate, char* anEventName)
{
	theEventDate = anEventDate;
	strcpy_s( theEventName, anEventName);

	theNextEventNodePtr = NULL;		

#ifdef EVENTNODEDEBUG
	cout << "\n**DEBUG from setEventNode** "<<endl;
	cout << "Event Name is "<< theEventName << endl;
	cout << "Event Date is " ;
	theEventDate.displayALLDate();
	cout << "The theNextEventNodePtr points at " << theNextEventNodePtr << endl;

#endif
}



inline void EventNode::displayEventNodeDetails()
{
	cout << "\n**DEBUG from displayEventNodeDetails** "<<endl;
	cout << "Event Name is "<< theEventName << endl;
	cout << "Event Date is " ;
	theEventDate.displayALLDate();
	cout << "The theNextEventNodePtr points at " << theNextEventNodePtr << endl;



}


#endif