#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		cout<<" ";
		for(j=1;j<=k;j++)
		cout<<"*";
		k+=2;
		cout<<"\n";
	}
	k-=4;
	for(i=1;i<=4;i++)
	{	
		for(j=1;j<=i;j++)
		cout<<" ";
		for(j=k;j>=1;j--)
		cout<<"*";
		cout<<"\n";
		k-=2;
	}
	return 0;
}
