/*Cyclically rotate an array */
#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n;
	char c='y';
	cout<<"number of elemnts in array \t";
	cin>>n;
	cout<<"enter array\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	while(c=='y')
	{
		for(i=1;i<n;i++)
		{
			arr[0]=arr[0]+arr[i];
			arr[i]=arr[0]-arr[i];
			arr[0]=arr[0]-arr[i];
		}
		for(i=0;i<n;i++)
		cout<<arr[i];
		cout<<"\npress y to rotate 1 more number\t";
		cin>>c;
	}
	return 0;
}
