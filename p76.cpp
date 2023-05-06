#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter number of rows and column=";
	cin>>r>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if((i+j)%2==0)
			cout<<"1";
			else
			cout<<"2";
		}
		cout<<endl;
	}
}
