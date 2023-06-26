
// only def 

#include"headertime.h"

int Time::count=0;//count

	Time::Time()
	{
		hr=0;
		min=0;
		sec=0;
		count++;
		cout<<"\ndefault "<<this->hr;
	}
	Time::Time(int h,int m,int s)	
	{
		hr=h;
		min=m;
		sec=s;
		count++;
		cout<<"\nParameterized";
		
	}

	void Time::display()
	{
		cout<<"\n"<<hr<<":"<<min<<":"<<sec;
	}
	
	void Time::showcount()
	{
		cout<<"\nObject Count: "<<count;	
	}


	void Time::store()
	{
		cout<<"\nEnter Hour Minute And Second Here";
		cin>>hr;
		cin>>min;
		cin>>sec;
		
		
	}

	int Time::gethr()
	{
		return hr;
	}

	int Time::getmin()
	{
		return min;
		
	}

	int Time::getsec()
	{
		return sec;
	}

	void Time::sethr(int h)
	{
		hr=h;
	}

	void Time::setmin(int m)
	{
		min=m;
		
	}

	void Time::setsec(int s)
	{
		sec=s;
	}

	Time Time::operator+(Time t)
	{
		Time temp;
		temp.sec= this->sec + t.sec;
		if(temp.sec>=60)
		{
			temp.min=temp.sec/60;
			temp.sec=temp.sec%60;
		}
		temp.min=this->min+t.min+temp.min;
		if(temp.min>=60)
		{
			temp.hr=temp.min/60;
			temp.min=temp.min%60;
		}
		temp.hr=this->hr+t.hr+temp.hr;
		return temp;
	
	}
	
	
