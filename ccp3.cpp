#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n[10],t,i,j,temp;
	cin>>t;
	for(i=0;i<t;i++)
	cin>>n[i];
	sort(n,n+t);
	for(i=0;i<t;i++)
	cout<<n[i]<<" ";
	return 0;
}
