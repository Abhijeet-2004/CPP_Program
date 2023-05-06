#include<iostream>
using namespace std;
int main()
{
	int r,i,j;
	cout<<"Enter number of row=";
	cin>>r;
	cout<<"\nPyramid is:\n";
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r-i;j++)
		cout<<" ";
		for(j=1;j<=(2*i-1);j++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
