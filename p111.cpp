//WAP find the transpose of martrix without using extra space
#include<iostream>
using namespace std;
int main()
{
	int r;
	cout<<"Enter the number of rows=\n";
	cin>>r;
	int a[r][r];
	cout<<"\nEnter element into array.";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<"\nvalue of a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	cout<<"\nEntered martrix is=\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<i;j++)
		{
			int tem=a[j][i];
			a[j][i]=a[i][j];
			a[i][j]=tem;
		}
	}
	cout<<"\nAfter transpose =\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
