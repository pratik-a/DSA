#include<iostream>
#include<conio.h>
using namespace std;
void kmin(arr,n,k)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }           
        }
    }
cout<<a[k];

}
void kmax(arr,n,k)
{
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
if(a[i]<>>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }    
        }
    }
cout<<a[k];
}
void enter()
{
    int arr[10],n,k;
	cout<<"enter numbers of element";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    cout<<"enter the k for min and max";
    cin>>k;
    kmin(arr,n,k);
    kmax(arr,n,k);
}

void main()
{
    enter();

}
