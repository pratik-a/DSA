/* Minimum no. of Jumps to reach end of an array */

#include<iostream>
using namespace std;

void jump(int arr[],int narr)
{
	int i=0,search,minjup;
	cout<<"enter element from where you want to jump to end\t";
	cin>>search;
	for(i=0;i<narr;i++)
	{
		if(search==arr[i])
		{
			minjup=narr-(i+1);
			break;
		}
	}
	cout<<minjup<<" required";
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
	jump(arr,narr);
}

