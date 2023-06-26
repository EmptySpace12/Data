#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

class Book
{
	int bid;
	double bprice;
	char bname[50];
	char bauthor[50];
	static int count;
	public:
		
	Book();
	Book(int,double,char*,char*);
	~Book();
	
	void setbid(int);
	void setbname(char*);
	void setbprice(double);
	void setbauthor(char*);
	
	int getbid();
	double getbprice();
	char* getbname();
	char* getbauthor();
	
	void showbook();
	static void showcount();	
	
};
