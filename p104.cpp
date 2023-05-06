//Write a program display multiplication of two marices entered by the user.
#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter row and column of first marix respectively=\n";
	cin>>r1>>c1;
	cout<<"\nEnter row and column of second marix respectively=\n";
	cin>>r2>>c2;
	if(c1==r2)
	{
	int m1[r1][c1],m2[r2][c2],m3[r1][c2];
	cout<<"\nenter element into martrix-1";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<"\nvalue of m1["<<i<<"]["<<j<<"]=";
			cin>>m1[i][j];	
		}
	}
	cout<<"\nenter element into martrix-2";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<"\nvalue of m2["<<i<<"]["<<j<<"]=";
			cin>>m2[i][j];	
		}
	}
	for(int i=0;i<r1;i++)
	{ 
		for(int j=0;j<c2;j++)
		{ 
		 	int sum=0;
			for(int k=0;k<r2;k++)
			{
				sum+=m1[i][k]*m2[k][j];
			}
			m3[i][j]=sum;	
		}
	}
	cout<<"\nMultiplication martix is=\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<m3[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	else
	cout<<"\nMartrix multiplication is not possibe beacuse number of column of first martrix doesnot equal to number of rows in second martix";
}
