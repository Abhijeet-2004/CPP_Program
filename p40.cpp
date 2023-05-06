/*Write a program which takes the values of length and breadth from user and check if it is
a square or not*/
#include<iostream>
using namespace std;
int main()
{
	int l,b;
	cout<<"Enter length:";
	cin>>l;
	cout<<"Enter bredth:";
	cin>>b;
	if(l==b)
	cout<<"\nIt is a square";
	else
	cout<<"\nIt is a rectangle";
	return 0;
}
