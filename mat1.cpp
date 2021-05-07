//Search an element in a matriix


#include<iostream>
#include<conio.h>
using namespace std;
void search(int mat[10][10],int n,int m)
{
	int i,j,key;
	cout<<"\nenter element to be found\t";
	cin>>key;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]==key)
			{
				cout<<"\nelement found\n\n";
				break;
			}
		}
	}
}
int main()
{
	int mat[10][10],i,j,m,n;
	cout<<"\nenter row of matrix\t";
	cin>>m;
	cout<<"\nenter cloumn of matrix\t";
	cin>>n;
	cout<<"\nenter matrix\n\n";

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"enter "<<i+1<<" row "<<j+1<<" column\t";
			cin>>mat[i][j];
		}
	}
	search(mat,m,n);
	getch();
	return 0;
}
