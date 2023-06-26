#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class Shirt
{
	int sid;
	char sname[40];
	char stype[40];
	char ssize[40];
	int sprice;
	
	public:
		 
		 Shirt();
		 
		 Shirt(int,int,char*,char*,char*);
		 
		 ~Shirt();
		 
		 
void setsid(int )

void setsname(char* );

void setstype(char* );

void setssize(char* );

void setsprice(int);


int getsid();

int getsprice();

char* getsname();

char* getstype();

char* getssize();

		 
void show();
		 
	
};
