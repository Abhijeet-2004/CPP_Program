/* Write a program perform single inheritance .
Written by Abhijeet
Date-25/12/2022*/
#include<iostream>
using namespace std;
class parent{
	protected:
		int x;
	public:
	void getX()
	{
		cout<<"Enter the value of x=";
		cin>>x;
	}
};
class child:public parent{
	int y;
	public:
	void getData()
	{
		getX();
		cout<<"Enter the value of y=";
		cin>>y;
	}
	void sum();
};
void child::sum()
{
	cout<<"\nSum of the entered two number is="<<x+y;
}
int main()
{
	child obj;
	obj.getData();
	obj.sum();
	return 0;
}
