#include"Arrayheader.h"
	
Array::Array(int s)
	{
		size=s;
		this->p=new int[size];
		index=-1;
	}
	
Array::~Array()
{
	if(p!=NULL)
	{
		delete []p;
		cout<<"\n\nHey Visit again";
	}
}
	
bool Array::isempty()
{
	if(index==-1)
	return true;
	else 
	return false;
	
}	

bool Array::isfull()
{
	if(index==size-1)
	return true;
	else 
	return false;
	
}	

	
bool Array::addelement(int data)
	{
		
		
		if(isfull())
		{
			return false;
		}
		else
		{
			p[++index]=data;
			return true;
		}
		
	}

void Array::searchelement(int element)
	{
		
		if(isempty())
		{
			cout<<"\nArray is Empty";
			cout<<"\n_____________________________________";
			
		}
		
		else
		{
			for(int i=0;i<=index;i++)
			{
				if(p[i]==element)
				{
					cout<<"\n Element Founded";
					cout<<"\n_____________________________________";
					
					return;	
				}
					
			}
			cout<<"\nElement not Founded";
			cout<<"\n_____________________________________";
					
 		}
	}
	
bool Array::deletelement(int element)
	{
		if(isempty())
		{
			cout<<"\nArray is Empty";
			cout<<"\n_____________________________________";
			
		}
		
		else
		{
			int i;
			for(i=0;i<=index;i++)
			{
				if(p[i]==element)
				{
					break;	
				}
					
			}
			if(i==index+1)
			{
				cout<<"\nElement not found";
				return false;
			}
			
			else
			{
				while(i<index)
				{
					p[i]=p[i+1];
					i++;
				}
				index--;
				return true;
			}
			
					
		}
	}
	
void Array::display()
	{
		
		if(isempty())
		{
			cout<<"\n_____________________________________";
			cout<<"\n\n NO Element";
			cout<<"\n_____________________________________";
			
		}
		
		else
		{
			cout<<"\n_______________________________________________\n\n";
			for(int i=0;i<=index;i++)
			{
				cout<<"\t"<<p[i];
			}
			cout<<"\n_______________________________________________";
			
		}
		
	}

