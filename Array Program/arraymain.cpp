
#include"Arrayheader.h"

int main() 
{
	
	
	Array arr(5);//arr is object 
	
	int choice=0;
	
	do
	{
		cout<<"\n 1. Add Element";
		cout<<"\n 2. Display Element";
		cout<<"\n 3. Search Element";
		cout<<"\n 4. Delete Element";
		cout<<"\n 0. Exit";
		
		cout<<"\n Enter your Choice";
		cin>>choice;
				
		switch (choice)
		{
			case 1:
				{
					int data;
					for(int i=0;i<5;i++)
					{
						cout<<"\n_____________________________________";
						cout<<"\nEnter Your Elements "<<(i+1)<<": ";
						cin>>data;
						
						if(arr.addelement(data))
						{
							cout<<"\n\n Added Succesfully";	
							cout<<"\n_____________________________________\n\n";
						}
						else
						{
							cout<<"\n\n Array is full \n";
							cout<<"\n_____________________________________";
					
							break;	
						}	
						
					}
					
				}
				break;
			
			case 2:
				{
					arr.display();
				}
			break;
			case 3:
				{
					int element;
					
					if(arr.isempty())
					{
						cout<<"\n_____________________________________";
						cout<<"\n\n No data yet entered";
						cout<<"\n_____________________________________";
					
					}
					else
					{
						cout<<"\n_____________________________________";
						cout<<"\nEnter The Data u want to search:";
						cin>>element;
						arr.searchelement(element);
					}
				}
				break;
				
			case 4:
				{
					int ele;
					
					if(arr.isempty())
					{
						cout<<"\n_____________________________________";
						cout<<"\n\n No data yet entered";
						cout<<"\n_____________________________________";
					
					}
					else
					{
						cout<<"\n_____________________________________";
						cout<<"\nEnter The Data u want to Delete:";
						cin>>ele;
						if(arr.deletelement(ele))
						cout<<"Deleted Successfully";
						else
						cout<<"Delete Process unSuccessfully";
						
					}					
				}
				break;
				default:
				{
					cout<<"\n_____________________________________";
					cout<<"\n Invalid Choice";
					cout<<"\n_____________________________________";
				}
				break;
						
		
		}
		
	}while(choice!=0);
	cout<<"\n_______________________________________________";
	cout<<"\nSomething when wrong Please Run again";
	cout<<"\n_______________________________________________";
	
	/*int data;
	for(int i=0;i<;i++)
	{
	cout<<"\nEnter Your Elements "<<(i+1)<<": ";
	cin>>data;
	if(arr.addelement(data))
	{
		cout<<"\n Added Succesfully";	
		cout<<"\n_____________________________________\n\n";
	}
	else
	{
		cout<<"\n Array is full \n";	
	}	
	
	}
	arr.display();*/
	
	return 0;
	
	
}
