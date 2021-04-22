/*Given an array arr[] denoting heights of N towers and a positive integer K,
 you have to modify the height of each tower either by increasing or decreasing
  them by K only once. After modifying, height should be a non-negative integer.
Find out what could be the possible minimum difference of the height of shortest
 and longest towers after you have modified each tower.*/


#include<iostream>
using namespace std;
int main()
{
	int arr[10],k,i,n;
    cout<<"number of elements in array \t";
	cin>>n;
	cout<<"enter array\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter k\t";
	cin>>k;
	for(i=0;i<n;i++)
    {
        if(arr[i]>k)
            arr[i]-=k;
        else
            arr[i]+=k;
    }
    for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
