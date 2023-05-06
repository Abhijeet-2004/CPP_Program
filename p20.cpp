#include<iostream>
using namespace std;
class test
{
	private:
	int a;
	int sum()
	{
		return a+b;
	}
	public:
	int b;
	void input()//for acessing private data member a
	{
		cout<<"\nEnter value of a=";
		cin>>a;
	}
	int mul()
	{
		return a*b;
	}
	void display()
	{
		cout<<"\nsum of "<<a<<" and "<<b<<" is ="<<sum();//here we access private sum()
		cout<<"\nMultiplication of "<<a<<" and "<<b<<" is ="<<mul();	
	}
};
int main()
{
	test obj;
	//we can't access a data member directly
	obj.input();
	cout<<"\nEnter value of b=";
	cin>>obj.b;
	obj.display();
}
