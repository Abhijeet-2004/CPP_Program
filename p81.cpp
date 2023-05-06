//WAP to convert a decimal number to binary number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int num,rem,bin=0,i=0;
	cout<<"Enter a decimal number=";
	cin>>num;
	while(num>0)
	{
		rem=num%2;
		bin=bin+rem*pow(10,i);
		i++;
		num/=2;	
	}
	cout<<"\nBinary number is="<<bin;
}
