#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
/*	for(i=1;i<=5;i++)
	{
		//cout<<"\n*";
		for(j=1;j<6-i;j++)
		cout<<"  ";
		for(j=1;j<=i;j++)
		cout<<" *";
		cout<<"\n";
		
		
	}
	for(i=2;i<=5;i++)
	{
		for(j=1;j<i;j++)
		cout<<" ";
		for(j=1;j<=6-i;j++)
		cout<<" *";	
		cout<<"\n";
	}	
*/
	for(i=1;i<6;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i || i==5)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<"\n";
	
	}
	return 0;
}
