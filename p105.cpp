//Write a program to display transpose of martrix entered by the user
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter the number of rows and column for martrix=\n";
	cin>>r>>c;
	int a[r][c];
	cout<<"\nEnter values into "<<r<<"*"<<c<<" martix:";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\nvalue of a["<<i<<"]"<<"["<<j<<"]=";
			cin>>a[i][j];	
		}
	}
	int t_matrix[c][r];
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			t_matrix[i][j]=a[j][i];
		}

	}
	cout<<"\nOriginal martrix=\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}	
	cout<<"\ntranspose martrix=\n";
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<t_matrix[i][j]<<" ";	
		}
		cout<<endl;
	}	
}
