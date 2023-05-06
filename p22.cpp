//use of friend function in more than one classes concept
#include<iostream>
using namespace std;
class B;
class A{
	int num1;
	public:
	void set()
	{
		int i;
		cout<<"Enter number(1)-";
		cin>>i;
		num1=i;
	}
	friend void function(A,B);//friend function
};
class B{
	int num2;
	public:
	void set()
	{
		int i;
		cout<<"Enter number(2)-";
		cin>>i;
		num2=i;
	}
	friend void function(A,B);//friend function
};
void function(A obA,B obB)
{
	if(obA.num1>obB.num2)
	cout<<obA.num1<<" is greater than "<<obB.num2;
	else
	cout<<obB.num2<<" is greater than "<<obA.num1;
}
int main()
{
	A obA;
	B obB;
	obA.set();
	obB.set();
	function(obA,obB);//calling friend function
	return 0;
}
