/*Write a program to perform + operator overloading for two complex number addition
Written by Abhijeet
Date-24/12/2022 */
#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
	complex(int a=0,int b=0)
	{
		real=a;
		img=b;
	}
	complex operator +(complex obj)
	{
		complex tem;
		tem.real=real+obj.real;
		tem.img=img+obj.img;
		return tem;
	}
	void display()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
};
int main()
{
	int a,b;
	cout<<"Enter a complex number"<<endl;
	cout<<"\nReal part=";
	cin>>a;
	cout<<"\nImaginary part=";
	cin>>b;
	complex t1(a,b);
	cout<<"\nEnter another complex number"<<endl;
	cout<<"\nReal part=";
	cin>>a;
	cout<<"\nImaginary part=";
	cin>>b;
	complex t2(a,b);
	complex t3;
	t3=t1+t2;//operator overloading
	//or
	//t3=t1.operator +(t2);
	cout<<"\nSum of entered two complex number is=";
	t3.display();
	return 0;
}
