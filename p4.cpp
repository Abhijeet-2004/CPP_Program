#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter three numbers=\n";
	cin>>x>>y>>z;
	if(x>y)
	{
		if(x>z)
		cout<<"Greater number is="<<x;
		else
		cout<<"Greater number is="<<z;
	}
	else
	{
		if(y>z)
		cout<<"Greater number is="<<y;
		else
		cout<<"Greater number is="<<z;
	}
	return 0;
}
