/*Given an array arr of N integers. Find the contiguous sub-array with maximum sum.*/

#include<iostream>
using namespace std;
int main()
{
	int arr1[10],sum=0,i,j=0,arr2[10],n;
    cout<<"number of elemnts in array \t";
	cin>>n;
	cout<<"enter array\n";
	for(i=0;i<n;i++)
	cin>>arr1[i];
	for(i=0;i<n;i++)
	{
	    if(arr1[i]>0)
	    {
            sum+=arr1[i];
            arr2[j]=arr1[i];
            j++;
	    }
    }
    for(i=0;i<j;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
