#include"headertime.h"

int main()
{
	Time::showcount();//class level method
	
	Time t1;
	t1.display();//object level method
	t1.sethr(9);
	t1.setmin(40);
	t1.setsec(45);
	t1.display();
	
	Time t2(3,40,50);
	t2.display();
	Time::showcount();
	
	Time t3;
	
	t3=t1+t2;
	t3.display();
	Time::showcount();
	
	
	return 0;
}
