//Write a program to print absolute value of a number entered by the user.
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	if(a<0)
	a*=(-1);
	cout<<"\nAbsoulute value="<<a;
	return 0;
}
