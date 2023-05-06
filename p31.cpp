/*Write a program to calculate the sum of the first and the second last digit of 
a 5 digit number.*/ 
#include<iostream>
using namespace std;
int main()
{
	int num,fd,sld,sum;
	cout<<"Enter a five digit number=";
	cin>>num;
	fd=num/10000;
	num=num%10000;
	num=num%100;
	sld=num/10;
	sum=fd+sld;
	cout<<"\nsum of the first and the second last digit of a 5 digit number="<<sum;
	return 0;
}
