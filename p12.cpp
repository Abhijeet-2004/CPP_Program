#include<iostream>
using namespace std;
void swap(int &p,int &q)
{
	p=p^q;
	q=p^q;
	p=p^q;
}
int main()
{
	int a=10,b=20;
	cout<<"\nBefore swapping a="<<a<<" and b="<<b;
	swap(a,b);
	cout<<"\nAfter swapping a="<<a<<" and b="<<b;
	return 0;
}
