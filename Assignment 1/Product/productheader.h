#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

class Product
{
	static double discount;

	int pid;
	double pprice;
	char pname[50];
	long int pquantity;
	
	public:
		
	Product();
	
	Product(int,double,char*,long int);
	
	~Product();
	
	void setpid(int);
	void setpname(char*);
	void setpprice(double);
	void setpquantity(long int);
	
	int getpid();
	double getpprice();
	char* getpname();
	
	long int getpquantity();
	
	void showProduct();
	
	
	static void showdiscount();	
	
};
