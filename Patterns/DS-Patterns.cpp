#include<iostream>
using namespace std;


int main()
{
	int i,j;//hollow traingle
	
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || i==5 || j==i)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}



int main10()
{
//Character	
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++) 
	{
		char ch='A';//first element hamesha A chaiye for all row tho write inside ...
	
		for(j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			ch++;	
		}
		
		cout<<"\n";
	}
	return 0;
}




int main9()
{
//traingle space traingle	
	int i,j,k=7;//k value take as max number in line..
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		
		
		for(j=1;j<=k;j++)
		{
			cout<<"  ";
		}
		k-=2;//bcz dono side se yek yek space ho raha hai..
		
		for(j=i;j>=1;j--)
		{
			if(j!=5)
			cout<<j<<" ";
		}
		
		cout<<"\n";
	}
	return 0;
}


int main8()
{
	
	int i,j;
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=6-i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		for(j=i-1;j>=1;j--)
		{
			cout<<j<<" ";
		}
		
		cout<<"\n";
	}
	return 0;
}









//floyd's Triangle

int main7()
{
	int i,j;
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=i;j++)
		{
			cout<<(i+j+1)%2<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

int main6()
{
	int i,j;//diamond=pyramid normal + reverse pyramid
	for(i=1;i<5;i++) 
	{
		for(j=1;j<=6-i;j++) //spaces jada and * kam
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)	 
		{
			cout<<"*   ";
		}
		
		cout<<"\n";
	}
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=i;j++)//spaces kam * jada
		{
			cout<<"  ";
		}
		for(j=1;j<=6-i;j++)		//for(j=5;j>=i;j--) 
		{
			cout<<"*   ";
		}
		
		cout<<"\n";
	}

	return 0;
}



int main5()
{
	int i,j;//pyramid
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=6-i;j++) //spaces jada and * kam
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)	 
		{
			cout<<"*   ";
		}
		
		cout<<"\n";
	}

	return 0;
}




int main3()
{
	int i,j;//reverse pyramid=traingle +inverted traingle
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=6-i;j++)		//for(j=5;j>=i;j--) 
		{
			cout<<"*   ";
		}
		
		cout<<"\n";
	}

	return 0;
}


int main2()
{
	int i,j;//traingle
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}


int main1()
{
	int i,j;
	for(i=1;i<=5;i++)//inverted
	{
								
		for(j=1;j<=6-i;j++)		//for(j=5;j>=i;j--) 
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
 
