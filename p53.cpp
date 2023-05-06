//Write a program to find the GCD and LCM of two numbers 
#include<iostream>
using namespace std;
int gcdCalculate(int,int);
int main()
{
	int num1,num2,gcd,lcm;
	cout<<"Enter two numbers=\n";
	cin>>num1>>num2;
	gcd=gcdCalculate(num1,num2);
	lcm=(num1*num2)/gcd;
	cout<<"\nGCD of "<<num1<<" and "<<num2<<" ="<<gcd;
	cout<<"\nLCM of "<<num1<<" and "<<num2<<" ="<<lcm;
	return 0;
}
int gcdCalculate(int a,int b)
{
	if(a==0)
	return b;
	if(b==0)
	return a;
	if(a>b)
	return gcdCalculate(a%b,b);
	else
	return gcdCalculate(a,b%a);
}
