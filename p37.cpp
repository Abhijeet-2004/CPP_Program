#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(int i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			cout<<" ";
		}
		for(j=2;j<=i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
