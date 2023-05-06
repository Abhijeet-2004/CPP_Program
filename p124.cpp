/* Write a program to perform ++ operator overloading using friend function
Written by Abhijeet
Date-24/12/2022 */
#include<iostream>
using namespace std;
class test{
	int x;
	public:
	test(){
		x=11;
	}
	void display()
	{
		cout<<"The value of x="<<x<<endl;
	}
	friend void operator ++(test &);
	friend void operator ++(test &,int);
};
void operator ++(test &p)
{
	++p.x;
}
void operator ++(test &p,int)
{
	p.x++;
}
int main()
{
	test obj;
	++obj;
	obj.display();
	obj++;
	obj.display();
}
