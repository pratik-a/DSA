/* find duplicate in an array of N+1 Integers */

#include<iostream>
using namespace std;

void duplicate(int arr[],int narr)
{
	int i=0,j,search,dup;

	for(i=0;i<narr;i++)
	{
		for(j=0;j<narr;j++)
		{
			if(arr[j]==arr[i] && j!=i)
			{
				cout<<"\narray has duplicate at "<<(j+1);
				break;
			}
		}
	}
	
	cout<<"\n\nenter element of which you want to find duplicate\t";
	cin>>dup;
	for(i=0;i<narr;i++)
	{
		if(dup==arr[i])
		{
			cout<<dup<<" has duplicate\n";
			break;
		}
		
	}
	
}
int main()
{
	int arr[10],narr;
	cout<<"enter number of elements in array\t";
	cin>>narr;
	for(int i=0;i<narr;i++)
	{
		cout<<(i+1)<<" value\t";
		cin>>arr[i];
	}
	duplicate(arr,narr);
}


