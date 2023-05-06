//printing martrix in spiral order
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the number of rows and columns of a martrix respectively="<<endl;
	cin>>m>>n;
	int a[m][n];
	cout<<"Enter values into the martrix="<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"value of a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	cout<<"\nPrinting martrix in spiral order="<<endl;
	int left=0,right=n-1,top=0,bottom=m-1,dir=0;
	while(left<=right&&top<=bottom)
	{
	if(dir==0)
	{
	for(int i=left;i<=right;i++)
	{
		cout<<a[top][i]<<" ";
	}
		top++;
	}
	else if(dir==1)
	{
		for(int i=top;i<=bottom;i++)
		{
			cout<<a[i][right]<<" ";
		}
		right--;
	}
	else if(dir==2)
	{
		for(int i=right;i>=left;i--)
		{
			cout<<a[bottom][i]<<" ";
		}
		bottom--;
	}
	else
	{
		for(int i=bottom;i>=top;i--)
		{
			cout<<a[i][left]<<" ";
		}
		left++;
	}
	dir=(dir+1)%4;
	}
}
