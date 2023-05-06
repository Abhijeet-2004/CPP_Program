//WAP Convert a binary number to decimal number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,dec=0,i=0;
	cout<<"Enter a Binary number=";
	cin>>num;
	while(num>0)
	{
		dec+=((num%10)*pow(2,i));
		i++;
		num/=10;
	}
	cout<<"\nDecimal number is="<<dec;
	return 0;
}
