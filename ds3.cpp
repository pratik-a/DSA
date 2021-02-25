//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3]={2,1,0},i,j,temp;
	for(i=0;i<3;i++)
	{
		cout<<"enter "<<i+1<<" element"<<"\t";
		cin>>a[i];
	}
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(a[j]==i)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	cout<<a[i]<<"\n";
}
