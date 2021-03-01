#include<iostream>
using namespace std;
int main()
{
	int n,m,k,i,t,j,count=0,ma[100],ka[100],temp,x;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m>>k;
		for(j=0;j<m;j++)
		{
			cin>>ma[j];
		}
		for(j=0;j<k;j++)
		{
			cin>>ka[j];
		}
		for(j=0;j<m;j++)
		{
			for(x=0;x<k;x++)
			{
				if(ma[j]==ka[x])
				{
					count++;
				}
			}
		}
		cout<<count<<" "<<n-m-k+count<<"\n";
		count=0;
	}
	return 0;
}
