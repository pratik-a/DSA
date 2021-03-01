//Find the Union and Intersection of the two sorted arrays.



#include<iostream>
#include<conio.h>
using namespace std;
void sort(int number[10],int n)
{
	int i,j,a;
        for (i = 0; i < n; ++i) 
		{
		 	for (j = i + 1; j < n; ++j)
            {
				if (number[i] > number[j]) 
				{
					a =  number[i];
					number[i] = number[j];
					number[j] = a;
                }
            }
        }
}
void unionn(int arr1[10],int arr2[10],int n1,int n2)
{
	int arr3[20],i,j=0,k=0;

	for(i=0;i<n1+n2;i++)
	{
		
		if(j!=n1 && k!=n2)
		{
			if(arr1[j]<arr2[k])
			{
				arr3[i]=arr1[j];
				j++;
			}
			else
			{
				arr3[i]=arr2[k];
				k++;
			}
		}
		else if(k!=n2)
		{
			arr3[i]=arr2[k];
			k++;
		}
		else if(j!=n1)
		{
			arr3[i]=arr1[j];
			j++;
		}
	}
	
	cout<<"\nunion of array\n";
	for(i=0;i<n1+n2;i++)
	{
		cout<<arr3[i]<<"\t";
	}
}
void inter(int arr1[10],int arr2[10],int n1,int n2)
{
	int arr3[20],k=0,i,j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arr3[k]=arr1[i];
				k++;
			}
		}
	}
	cout<<"\nintersection of array\n";
	for(i=0;i<k;i++)
	{
		cout<<arr3[i]<<"\t";
	}
}
int main()
{
	int arr1[10],arr2[10],n1,n2,i;
	cout<<"enter number of elements in array 1\t";
	cin>>n1;
	cout<<"enter number of elements in array 2\t";
	cin>>n2;
	cout<<"enter array1\n";
	for(i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter array2\n";
	for(i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	sort(arr1,n1);
	sort(arr2,n2);
	unionn(arr1,arr2,n1,n2);
	inter(arr1,arr2,n1,n2);
	getch();
	return 0;
}
