//WAP domenstrate ,by using of friend funcution ascess different classes members
#include<iostream>
using namespace std;
class test2;
class test1{
	int num;
	public:
	void set()
	{
		cout<<"Enter a number for test1=";
		cin>>num;
	}
	friend void sum(test1 &,test2 &);
};
class test2{
	int num;
	public:
	void set()
	{
		cout<<"\nEnter a number for test2=";
		cin>>num;
	}
	friend void sum(test1 &,test2 &);
};
void sum(test1 &ob1,test2 &ob2)
{
	cout<<"\nSum is="<<ob1.num+ob2.num;
}
int main()
{
	test1 a;
	test2 b;
	a.set();
	b.set();
	sum(a,b);
	return 0;	
}
