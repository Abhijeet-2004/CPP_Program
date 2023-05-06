/*Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a positive number=";
	cin>>num;
	if(num<0)
	cout<<"\nThe number is negative and skipped";
	else
	cout<<"\nEnter number is="<<num;
	return 0;
}
