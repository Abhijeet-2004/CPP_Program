/* Write a program to perform ++ operator overloading using member function
Written by Abhijeet
Date-24/12/2022 */
#include<iostream>
using namespace std;
class test{
	int x;
	public:
	test(){
		x=10;
	}
	void operator ++()
	{
		++x;
	}
	void operator ++(int)
	{
		x++;
	}
	void display()
	{
		cout<<"The value of x="<<x<<endl;
	}
};
int main()
{
	test obj;
	++obj;
	obj.display();
	obj++;
	obj.display();
}
