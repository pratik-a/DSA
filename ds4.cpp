//Move all the negative elements to one side of the array 

#include<iostream>
#include<conio.h>
using namespace std;
void diff(int a[10],int n)
{
	int k=0,temp,i;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
			k++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[10],n,i;
	cout<<"enter number of elememts\t";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element at "<<i+1<<"\t";
		cin>>a[i];
	}
	diff(a,n);
	getch();
}
