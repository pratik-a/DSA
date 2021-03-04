//Find row with maximum no. of 1's


#include<iostream>
#include<conio.h>
using namespace std;
void search(int mat[10][10],int n,int m)
{
	int i,j,count[10]={0},max=count[0],row;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]==1)
			{
				count[i]++;
			}
		}
	}
	for(i=1;i<m;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			row=i;
		}
	}
	cout<<"row with maximum 1 is "<<row+1;
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
