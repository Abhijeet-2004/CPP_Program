/* Write a program perform multiple inheritance .
Written by Abhijeet
Date-25/12/2022 */
#include<iostream>
using namespace std;
class parent1{
	private:
		int p;
	public:
	void getp()
	{
		cout<<"Enter the value of p=";
		cin>>p;
	}
	void disp(){
		cout<<"P="<<p<<endl;
	}
};
class parent2{
	private:
		int q;
	public:
	void getq()
	{
		cout<<"\nEnter the value of q=";
		cin>>q;
	}
	void disq(){
		cout<<"q="<<q<<endl;
	}
};
class parent3{
	private:
		int r;
	public:
	void getr()
	{
		cout<<"\nEnter the value of r=";
		cin>>r;
	}
	void disr(){
		cout<<"r="<<r<<endl;
	}
};
class child:public parent1,public parent2,public parent3{
	int s;
	public:
	void getData()
	{
		getp();
		getq();
		getr();
		cout<<"\nEnter the value of s=";
		cin>>s;
	}
	void display()
	{
		disp();
		disq();
		disr();
		cout<<"s="<<s;
	}
};
int main()
{
	child obj;
	obj.getData();
	obj.display();
}
