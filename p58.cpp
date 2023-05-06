//WAP for swapping of two number using pass by reference
#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
	int a,b;
	cout<<"Enter value of A=";
	cin>>a;
	cout<<"Enter value of B=";
	cin>>b;
	swap(a,b);
	cout<<"\nAfter swaping:"<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	return 0;
}
void swap(int &a,int &b)
{	
	a=a^b;
	b=a^b;
	a=a^b;
}
