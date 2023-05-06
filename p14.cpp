#include<iostream>
using namespace std;
int greatest(int a,int b);
int main()
{
	int x,y;
	cout<<"Enter two number=";
	cin>>x>>y;
	cout<<"Greatest number is="<<greatest(x,y);
	return 0;
}
int greatest(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

