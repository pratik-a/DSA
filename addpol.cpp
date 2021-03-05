#include<iostream>
#include<conio.h>
using namespace std;
void insert(int pol[10],int n)
{
	cout<<"\n\n******entering polynomial*****\n\n";
	for(int i=0;i<=n;i++)
	{
		cout<<"enter the value for "<<i<<" degree \t ";
		cin>>pol[i];
	}
}
void add(int final[10],int pol1[10],int pol2[10],int n)
{
	for(int i=0;i<=n;i++)
	{
		final[i]=pol1[i]+pol2[i];
	}
}
void display(int final[10],int n)
{
	cout<<"\n\n#####final result#####\n\n";
	cout<<"\n\nequation is \t ";
	for(int i=n;i>=0;i--)
	{
		if(final[i]!=0 && i!=0)
		{
		cout<<"("<<final[i]<<")"<<"x^"<<i<<" + ";
		}
		else if(i==0)
		{
			cout<<final[i];
		}
		
	}
}
	
int main()
{
	int pol1[10]={0},pol2[10]={0},final[10],n1,n2,n;
	cout<<"enter the degree for first polynomial add \t ";
	cin>>n1;
	insert(pol1,n1);
	display(pol1,n1);
	cout<<"\n\nenter the degree for secound polynomial add \t ";
	cin>>n2;
	insert(pol2,n2);
	display(pol2,n2);
	n=n1>n2?n1:n2;
	add(final,pol1,pol2,n);
	display(final,n);
	getch();
	return 0;
}
