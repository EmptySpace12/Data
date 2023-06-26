
// only declartion 
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

/*count we cant take as global var bcz it is asscesible to everywhere ang anyone in programm
 so security concern we write static*/

class Time
{
	int hr;//object level
	int min;
	int sec;
	
	static int count; 	/*(class level)---------so by writing static we saved memory bcz its global to that class
							as well as kept it private bcz its wriiten in class*/ 
	
	
	
	public:
	
	//deflaut constructor
	Time();
	
	//parameterized constructor
	Time(int,int,int);	
	
	
	void display();
	
	void store();
	
	//getter
	int gethr();
	int getmin();
	int getsec();
	
	//setter
	void sethr(int);
	void setmin(int);
	void setsec(int);
	
	//addition
	Time operator+(Time);
	
	static void showcount();
};

