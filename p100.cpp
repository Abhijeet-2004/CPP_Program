//copy constructor demonstration
#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
	test(int num1,int num2)
	{
		a=num1;b=num2;
	}
	test(const test &obj)//copy constuctor
	{
		a=obj.a;
		b=obj.b;
	}
	void display(){
		cout<<a<<"\t"<<b<<endl;
	}
};
int main()
{
	test obj1(10,2);
	test obj2(obj1);//copy constructor called 
	obj1.display();
	obj2.display();
}
