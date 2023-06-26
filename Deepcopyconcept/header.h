
// only declartion 
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

/*count we cant take as global var bcz it is asscesible to everywhere and anyone in programm
 so security concern we write static*/

class Time
{
	int hr;
	int min;
	int sec;
	
	static int count; 	
	
	
	public:
	
	Time();
	
	Time(int,int,int);	
	
	Time(Time);//deepcopy
	
	~Time();
	
	void display();
	
	void store();
	
	int gethr();
	int getmin();
	int getsec();
	
	void sethr(int);
	void setmin(int);
	void setsec(int);
	
	Time operator+(Time);
	
	static void showcount();
};

