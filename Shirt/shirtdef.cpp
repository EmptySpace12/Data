#include "shirtheadher.h"

Shirt::Shirt()
{
	
	this->sid=0;
	this->sprice=0;
	strcpy(this->sname,"Not yet");
	strcpy(this->stype,"Not yet Given");
	strcpy(this->ssize,"Not yet Given");
	
}

Shirt::Shirt(int i,int p,const char * n,const char * t,const char * s)
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
/*	//cout<<"\nShirt Price  :"<<this->sprice;
//	if(strcasecmp(sname,"Small")==0)
	if(ssize=="Small")
	cout<<"\nShirt Price  :"<<sprice+sprice*0.1;
	if(ssize=="Medium")
	cout<<"\nShirt Price  :"<<sprice+sprice*0.2;
	if(ssize=="Large")
	cout<<"\nShirt Price  :"<<sprice+sprice*0.3;
*/	
	
}



