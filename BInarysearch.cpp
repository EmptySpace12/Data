#include<iostream>
using namespace std;

int search(int* arr,int n,int e)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==e)
		return mid;
		if(arr[mid]<e)
		low=mid+1;
		else
		high=mid-1;
	}
	
	return -1;
}

int main()
{
	int n,e;
	cout<<"\nEnter Size of the Element here: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter Array Elements Here";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter Element u want to search in Array";
	cin>>e;
	
	int a=search(arr,n,e);
	
	if (a!= -1)
       cout << "Element found at index "<<a;
    else
        cout << "Element not found in the array." <<a;

	return 0;
}
