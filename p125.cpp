/*Write a program to distingush the properties of static and non static data member
Written by Abhijeet
Date:24/12/2022 */
#include<iostream>
using namespace std;
class example{
	public:
	static int x;//static data member
	int y;//non static data member
	void display()
	{
		x++;
		cout<<"\nx="<<x;
		cout<<"\ny="<<y;
	}
};
//initialize the static variable outside class scope
int example::x=10;
//we can't initialize non static variable outside class scope
//int example::y=20;
int main()
{
	cout<<"Directly accessing static member value="<<example::x;
	//we can't access no sratic members directly
	//cout<<example::y;
	example ob1,ob2;
	ob1.y=20;
	ob2.y=30;
	ob1.display();
	ob2.display();
}

