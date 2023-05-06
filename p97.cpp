//WAP demonstrate a class is friend of another class
#include<iostream>
using namespace std;
class test2;
class test1{
	int a;
	public:
	void getA()
	{
		cout<<"Enter value of A=";
		cin>>a;
	}
	friend class test2;
};
class test2{
	int b;
	public:
	void getB()
	{
		cout<<"Enter value of B=";
		cin>>b;
	}
	void sum(test1 &obj)
	{
		cout<<"Sum="<<obj.a+b;
	}
};
int main()
{
	test1 obj1;
	test2 obj2;
	obj1.getA();
	obj2.getB();
	obj2.sum(obj1);
	return 0;
}
