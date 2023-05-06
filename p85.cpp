//WAP to demonstrate a class can be friend with another class
#include<iostream>
using namespace std;
class test2;
class test1{
	private:
	int a;
	public:
	friend class test2;
};
class test2{
	private:
	int b;
	public:
	void set_data(test1 &obj)
	{
		cout<<"Enter two number=\n";
		cin>>obj.a>>b;
	}
	void put_data(test1 &obj)
	{
		cout<<"\nEntered two number is=\n"<<obj.a<<endl<<b;
	}
};
int main()
{
	test1 ob1;
	test2 ob2;
	ob2.set_data(ob1);
	ob2.put_data(ob1);
}

