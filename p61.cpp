//WAP count the number of digits of a given number n
#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number:";
	cin>>num;
	while(num>0)
	{
		num/=10;
		count++;
	}
	cout<<"\nNumber of digits in entered number is="<<count;
	return 0;
}
