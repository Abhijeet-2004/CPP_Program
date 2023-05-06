#include<iostream>
using namespace std;
int sum(int num);
int main()
{
	int n;
	cout<<"Enter the number=";
	cin>>n;
	cout<<"Sum is:"<<sum(n);
	return 0;
}
int sum(int num)
{
	if(num!=0)
	return num+sum(num-1);
}

