#include "Event.h"

#include "EventNode.h"

int main (void) 
{
	cout<<"-----------------------------------Main has Started----------------------------" <<endl;

	//cout << " Set up dates for use later"<< endl;
	
	//Date	anEvent ( 25,12,2015 );     // Event dates for later
	//Date	anotherEvent ( 31,12,2015);
	//Date	yetAnotherEvent ( 17, 3, 2015);
	//Date    third(5,5,2000);
	

	cout << " Create pointers for Event Nodes for use later"<< endl;
	
	EventNode *		startOfList;     //Create pointers for Event Nodes
	EventNode *		temporaryNode;
	EventNode *     head;
	EventNode*      EndOfList;//not currently used

	
	cout << "\n--Create the First Node in the list--" <<endl;  // Create the first node in the list

	startOfList = new EventNode;	//new returns address of node            1
	
	temporaryNode = startOfList;	// leave start of List unchanged  2

	head = startOfList;





	//startOfList-> setEventNode (anEvent, "Christmas Day 1");              //    3
	cout << "The next node in the list is at address " <<startOfList->getTheNextEventNodePtr() << endl;
	startOfList ->askUserEventDetails();
	
	//cout << '\n' <<'\n' << " Create the next node in the list" <<endl;     //4 
	//startOfList = new EventNode;
	//head->getTheNextEventNodePtr() = startOfList;

		char input;
	   
	    cout<<"\nWould you like to add to the list, [y/n] =>";
		cin>>input;
	    cin.ignore(10,'\n');

	while(input =='y')
	{
	 temporaryNode->setTheNextEventNodePtr ( new EventNode);   //create the next new node 

	 cout << "The next node in the list is at address " <<temporaryNode->getTheNextEventNodePtr() << endl;  //get the address of this new node

	 (temporaryNode -> getTheNextEventNodePtr()) ->askUserEventDetails();   //ask user Event details for the new node                
	
	 temporaryNode = temporaryNode ->getTheNextEventNodePtr();     //move temp node to the next node pointer

	 	cout<<"\nWould you like to add to the list, [y/n] =>";
		cin>>input;
	    cin.ignore(10,'\n');
	}




	
	 while ( startOfList->getTheNextEventNodePtr() != NULL)     //deconstructor while loop, delete nodes where the nextPtr doesnt equal to NULL
	 {
		 //this bit will delete from the start of the list 
		head = startOfList;
		
		startOfList = (startOfList -> getTheNextEventNodePtr());
		
		delete head; //calls the deconstructor of EventNode 
           

	 }
	                         //calls the deconstructor of EventNode 
	 delete startOfList;    //delete the last node wich does point to NULL
	

	 


	cout<<"-----------------------------------Main is Ending------------------------------" << endl;

	return 0;
}
