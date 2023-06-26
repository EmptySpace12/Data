#include<iostream>
using namespace std;

//bubble sorting ..........Time Complexity - o(n2)..
void bubble(int* p,int n)
{
	int i,j;
	for(i=1;i<=n;i++)//
	{
		
		for(j=0;j<n-i;j++)//n-1,n-2,n-3...so directly we did i and i started from 1.
		{
			if(p[j]>p[j+1])
			{
				int t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	
	}
	
	
}


int main()
{
	int n,i;
	cout<<"\nEnter Size of Element";
	cin>>n;
	int p[n];
	cout<<"\nEnter array elements Here:";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	bubble(p,n);
	
	for(i=0;i<n;i++)
	{
		cout<<p[i];
	}
	return 0;
	
}
