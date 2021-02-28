#include<iostream>
#include<conio.h>
using namespace std;
void kmin(int arr[],int n,int k)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }           
        }
    }
cout<<"\nkth minimum element\t"<<arr[k-1];

}
void kmax(int arr[],int n,int k)
{
	int temp;
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
			if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        }
    }
cout<<"\nkth maximum element\t"<<arr[k-1];
}
void enter()
{
    int arr[10],n,k;
	cout<<"\nenter numbers of element\t";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    cout<<"\nenter the k for min and max\t";
    cin>>k;
    kmin(arr,n,k);
    kmax(arr,n,k);
}

int main()
{
    enter();
	getch();
	return 0;
}
