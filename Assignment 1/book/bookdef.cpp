	
#include "bookheader.h"
	
	int Book::count=0;
	
	Book::Book()
	{
		bid=0;
		//bname=0;
		strcpy(bname,"Not given");
		strcpy(bauthor,"Not Given");
		//bauthor=0;
		bprice=0;
		count++;
	}
	Book::Book(int i,double p,char* n,char* a)
	{
		this->bid=i;
		strcpy(this->bname,n);
		strcpy(this->bauthor,a);
		this->bprice=p;
		count++;
	}
	
	Book::~Book()
	{
		cout<<"\n its getting deleted";
		cout<<count--;
		
	}
	
	void Book::setbid(int i)
	{
		this->bid=i;
	}
	
	void Book::setbname(char* n)
	{
		strcpy(this->bname,n);
	}
	
	void Book::setbprice(double p)
	{
		this->bprice=p;
	}
	
	void Book::setbauthor(char* a)
	{
		strcpy(this->bauthor,a);
	}
	
	
	int Book::getbid()
	{
		return this->bid;
	}
	
	double Book::getbprice()
	{
		return this->bprice;
	}
	
	char * Book::getbname()
	{
		return this->bname;
	}
	
	char * Book::getbauthor()
	{
		return this->bauthor;
	}
	
	
	
	void Book::showbook()
	{
		cout<<"\nBook Id        :"<<this->bid;
		cout<<"\nBook Name      :"<<this->bname;
		cout<<"\nBook Author    :"<<this->bauthor;
		cout<<"\nBook Price     :"<<this->bprice;
		cout<<"\n__________________________________________";
	}
	void Book::showcount()
	{
		cout<<"\nCount          :"<<count;
		cout<<"\n__________________________________________";
	}
	
