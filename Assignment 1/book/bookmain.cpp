#include "bookheader.h"

int main() 
{
	
	Book::showcount();
	Book b1(1,1499,"Bhagwat Gita","Shri. Prabhu");
	b1.showbook();
	
	
	
	Book b2(2,1999,"Gravity","James");
	b2.showbook();
	
	Book::showcount();
	return 0;
	
}
