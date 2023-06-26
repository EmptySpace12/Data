	
#include "productheader.h"
	
	double Product::discount=0.1;
	
	Product::Product()
	{
		pid=0;
		strcpy(pname,"Not given");
		pquantity=0;
		pprice=0;
	
	}
	Product::Product(int i,double p,char* n,long int q)
	{
		this->pid=i;
		strcpy(this->pname,n);
		this->pprice=p;
		this->pquantity=q;
	
	}
	
	 
	
	Product::~Product()
	{
		
		cout<<"\nbyee..";
		
	}
	
	void Product::setpid(int i)
	{
		this->pid=i;
	}
	
	void Product::setpname(char* n)
	{
		strcpy(this->pname,n);
	}
	
	void Product::setpprice(double p)
	{
		this->pprice=p;
	}
	
	void Product::setpquantity(long int q)
	{
		this->pquantity=q;
	}
	
	
	int Product::getpid()
	{
		return this->pid;
	}
	
	double Product::getpprice()
	{
		return this->pprice;
	}
	
	char * Product::getpname()
	{
		return this->pname;
	}
	
	long int Product::getpquantity()
	{
		return this->pquantity;
	}
	
	
	
	void Product::showProduct()
	{
		
		cout<<"\nProduct Id         :"<<this->pid;
		cout<<"\nProduct Name       :"<<this->pname;
		cout<<"\nProduct Quanity    :"<<this->pquantity;
		cout<<"\nProduct Price      :"<<this->pprice;
		cout<<"\nDiscounted Price   :"<<pprice-(pprice*discount);
	
		cout<<"\n__________________________________________";
	}
	
	void Product::showdiscount()
	{
		cout<<"\n"<<discount;
		
		cout<<"\n__________________________________________";
	}
	
