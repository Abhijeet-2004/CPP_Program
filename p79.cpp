//Write a program show the ways of calling constructors and destructors
#include<iostream>
using namespace std;
class demo
{
	int a,b,sum;
	public:
	demo(int x,int y)//constructor
	{
		a=x;
		b=y;
	}
	void calculate()
	{
		sum=a+b;
	}
	~demo()//destructor
	{
		cout<<"\nSum of the entered two numbers is="<<sum;
	}
};
int main()
{
	int p,q;
	cout<<"Enter two number=\n";
	cin>>p>>q;
	demo obj(p,q);
	obj.calculate();
	return 0;
}
