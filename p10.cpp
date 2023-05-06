#include<iostream>
using namespace std;
void swap(int a, int b);
int main()
{
	int x,y;
	cout<<"Enter two number=";
	cin>>x>>y;
	cout<<"Before swapping numberers are "<<x<<" and "<<y;
	swap(x,y);
	return 0;
}
void swap(int a ,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<endl<<"After swapping numberers are "<<a<<" and "<<b;
	
}
