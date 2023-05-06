//Write a program to check number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int num;
	bool flag=false;
	cout<<"Enter a number=";
	cin>>num;
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
		flag=true;
		cout<<endl<<num<< " is not a prime number";
		break;
		}
	}
	if(flag==false)
	cout<<endl<<num<<" is a prime number";
	return 0;
}
