#include<iostream>
using namespace std;
int main()
{
	int r;
	cout<<"enter number of row=";
	cin>>r;
	for(int i=r;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
