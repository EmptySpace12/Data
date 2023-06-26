#include "header.h"

int main() 
{
	
	Shirt s(1,3499,"Peter England","Formal","large");
	s.show();
	Shirt s1;
	s1.setsid(1);
	s1.setssize("Medium");
	s1.setsprice(1233);
	s1.setstype("Formal");
	s1.setsname("Raymond");
	s1.show();
	return 0;

}
