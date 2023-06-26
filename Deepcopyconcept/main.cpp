#include"header.h"

int main()
{
	Time::showcount();
	
	Time t1;
	
	t1.display();
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
	
	Time t4(t2);//t4.Time(t2).......means t4 with this and t2 as parameter so dot. for members
	t4.display();
	
	return 0;
}
