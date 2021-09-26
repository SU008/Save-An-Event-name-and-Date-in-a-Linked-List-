#ifndef DATE
#define DATE
#define SIZEOFCHINESEYEAR 50



/*
remove the "//" in the next two lines to debug the code which will give an output when each function is executed. 
*/ 
//#define DATE_DECONSTRUCTOR
//#define DATEDEBUG


#include <stdio.h>
#include <iostream>

using namespace std; 

class Date
{
public: 
	Date(void);
	Date( int aDay, int aMonth, int aYear);
	~Date();


	void setDate(int aDay,int aMonth,int aYear);

	int getTheDay(void);
        int getTheMonth(void);
	int getTheYear(void);


	void setTheChineseYear(char* aChineseYear);
	char* getTheChineseYear(void);

	void askTheDate();

	void displayALLDate(void);

protected: 
	int theDay;
	int theMonth;
	int theYear;
	char theChineseYear[SIZEOFCHINESEYEAR];
};




inline void Date ::askTheDay()
{
	cout<<"DEBUG:askTheDay[Date]: Enter the Day you were born in => ";
	cin>>theDay;
}



inline Date :: Date(void)                                           //default
{
	theDay = 1;
	theMonth = 1;
	theYear = 1930;
	strcpy_s(theChineseYear, "N/A");

#ifdef DATEDEBUG

	cout << "\nDEBUG:Default constructor[Date]: The Date is "<< theDay << "/"<< theMonth<<"/" << theYear << "/" <<theChineseYear
			<< endl;	
#endif
}



inline Date :: Date( int aDay, int aMonth, int aYear)   // Regular Constructor
{
	theDay = aDay;
	theMonth = aMonth;
	theYear = aYear;
	//strcpy_s(theChineseYear, aChineseYear);

#ifdef DATEDEBUG
	cout << "DEBUG:Regular constructor[Date]: The Date is "<< theDay << "/"<< theMonth<<"/" << theYear << "/" <<theChineseYear<< endl;	
#endif
}

inline Date :: ~Date()
{
#ifdef  DATE_DECONSTRUCTOR
	cout<<"DEBUG:Deconstructor[Date]: The Full Date is:" << theDay<< "/" <<theMonth <<"/" <<theYear <<"/" <<theChineseYear <<"/" <<endl;
#endif
}




inline void Date :: askTheDate()
{
  cout<<"\nDEBUG:askTheDate[Date]: Enter the Date, like DD/MM/YY with [Space bar] between the numbers =>";
  cin>>theDay;
  cin>>theMonth;
  cin>>theYear;
  cin.ignore(10,'\n');
}


inline void Date :: setDate(int aDay,int aMonth,int aYear)
{

	theDay = aDay;
	theMonth = aMonth;
	theYear = aYear;
#ifdef DATEDEBUG
	cout <<"DEBUG:setDate[Date]:";
#endif	
	cout<<"The set Date is "<< theDay<<"/"<<theMonth<<"/"<<theYear <<endl;

}



inline int Date ::getTheDay()
{
	return theDay;
}

/*inline void Date ::askTheDay()
{
	cout<<"DEBUG:askTheDay[Date]: Enter the Day you were born in => ";
	cin>>theDay;
}*/




inline int Date ::getTheMonth()
{
	return theMonth;
}

inline void Date ::askTheMonth()
{
	cout<<"DEBUG:askTheMonth[Date]: Enter the Month you were born in => ";
	cin>>theMonth;
}


inline int Date ::getTheYear()
{
	return theYear;
}

/*inline void Date ::askTheYear()
{
	cout<<"DEBUG:askTheMonth[Date]: Enter the Year you were born in => ";
	cin>>theYear;
}*/





inline void Date :: setTheChineseYear(char* aChineseYear)       //display theChineseYear
{
	strcpy_s ( theChineseYear , aChineseYear);
	cout<<"DEBUG:setTheChineseYear[Date]: The ChineseYear is  "<<theChineseYear<<endl;
}


inline char* Date :: getTheChineseYear()                   //get chineseYear
{
  return theChineseYear;
}


inline void Date :: displayALLDate(void)                     // display allDate
{
	//cout<<"DEBUG:displayALLDate[Date]: The Date is:" << theDay<< "/" <<theMonth <<"/" <<theYear <<"/" <<theChineseYear <<"/" <<endl;
	//cout<<"DEBUG:displayALLDate[Date]: The Date is:" << theDay<< "/" <<theMonth <<"/" <<theYear<<endl;
	cout<<theDay<< "/" <<theMonth <<"/" <<theYear<<endl;
}



#endif