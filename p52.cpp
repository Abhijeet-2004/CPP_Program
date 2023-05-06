//Write a program to find the GCD and LCM of two numbers 
#include<iostream>
using namespace std;
int main()
{
	int a,b,gcd,lcm,smn;
	cout<<"Enter two numbers=\n";
	cin>>a>>b;
	smn=(a>b)?b:a;
	for(int i=1;i<=smn;i++)
	{
		if(a%i==0&&b%i==0)
		gcd=i;
	}
	lcm=(a*b)/gcd;
	cout<<"\nGCD of "<<a<<" and "<<b<<" is ="<<gcd;
	cout<<"\nLCM of "<<a<<" and "<<b<<" is ="<<lcm;
}
