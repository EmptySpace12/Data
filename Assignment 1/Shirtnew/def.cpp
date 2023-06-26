#include "header.h"

Shirt::Shirt()
{
	
	this->sid=0;
	this->sprice=0;
	strcpy(this->sname,"Not yet");
	strcpy(this->stype,"Not yet Given");
	strcpy(this->ssize,"Not yet Given");
	
}

Shirt::Shirt(int i,int p,char * n, char * t,char * s)
{
	this->sid=i;
	this->sprice=p;
	strcpy(this->sname,n);
	strcpy(this->stype,t);
	strcpy(this->ssize,s);
	
}

Shirt::~Shirt()
{
	cout<<"\ni am going";		
}


void Shirt::setsid(int i)
{
	this->sid=i;
	
}

void Shirt::setsname(char* n)
{
	strcpy(this->sname,n);
	
}
void Shirt::setstype(char* t)
{
	strcpy(this->stype,t);	
}

void Shirt::setssize(char* s)
{
	strcpy(this->ssize,s);
	
}

void Shirt::setsprice(int p)
{
	this->sprice=p;
	
}


int Shirt::getsid()
{
	return this->sid;
}

int Shirt::getsprice()
{
	return this->sprice;
}

char* Shirt::getsname()
{
	return this->sname;
}

char* Shirt::getstype()
{
	return this->stype;
}

char* Shirt::getssize()
{
	return this->ssize;
}


void Shirt::show()
{
	
	cout<<"\nShirt Price  :"<<this->sprice;
	
	cout<<"\nShirt id     :"<<this->sid;
	cout<<"\nShirt Name   :"<<this->sname;
	cout<<"\nShirt Type   :"<<this->stype;
	cout<<"\nShirt Size   :"<<this->ssize;
	
	if(strcasecmp(ssize,"Small")==0)
	cout<<"\nShirt Price  :"<<(sprice+(sprice*0.1));
	
	if(strcasecmp(ssize,"Medium")==0)
	cout<<"\nShirt Price  :"<<sprice+sprice*0.2;
	
	if(strcasecmp(ssize,"Large")==0)
	cout<<"\nShirt Price  :"<<sprice+sprice*0.3;
	
	cout<<"\n____________________________________________";
	
}



