#include<iostream>
using namespace std;
 
class Array
 
 {
 	
 	int *p;
 	int size;
 	int index;
 	
	
	public:
 		
 	Array(int);
 	~Array();
 	bool isempty();
 	bool isfull();
 	
 	bool addelement(int);
 	void searchelement(int);
 	bool deletelement(int);
 	void display();
 	
 };

