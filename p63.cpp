//WAP to find reverse of a number
#include<iostream>
using namespace std;
class result{
	int num;
	public:
	void getData()
	{
	cout<<"Enter a number=";
	cin>>num;
	}
	void reverse()
	{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	cout<<"\nReverse of entered number is="<<rev;
	}
};
int main()
{
	result a;
	a.getData();
	a.reverse();
	return 0;
}
