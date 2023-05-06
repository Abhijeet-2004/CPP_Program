#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
	int num;
	cout<<"Enter the no. numbers required in series=";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cout<<fibo(i)<<endl;
	}
	return 0;
}
int fibo(int n)
{
	if(n<=1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
