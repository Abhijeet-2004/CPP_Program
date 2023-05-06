/*Given two numbers a and b, write a program to print all the prime numbers present between 
a and b.*/
#include<iostream>
using namespace std;
int isprime(int n){
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	if(i==n)
	return 1;
}
int main()
{
	int a,b;
	cout<<"Give two number=\n";
	cin>>a>>b;
	cout<<"\nPrime number in between "<<a<<" to "<<b<<" is=\n";
	for(int i=a;i<=b;i++)
	{
		if(isprime(i)==1)
		cout<<endl<<i;
	}
}
