/* Write a program to show the way of calling constructor and destructor
Written by Abhijeet
Date-23/12/2022 */
#include<iostream>
using namespace std;
class test{
	int x,y;
	public:
	//default constructor
	test(){
		cout<<"Enter two values="<<endl;
		cin>>x>>y;
	}
	//parmetorized constructor
	test(int p,int q){
		x=p;
		y=q;	
	}
	//copy constuctor
	test(const test &obj)
	{
		x=obj.x;
		y=obj.y;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	//destructor
	~test()
	{
		static int i=1;
		cout<<"Destructor called for object t"<<i++<<endl;
	}
};
int main()
{
	test t1;//default constructor call
	cout<<"\nValues at t1 object"<<endl;
	t1.display();
					
	test t2(10,20);//paramiterized constructor call
	cout<<"\nValues at t2 object="<<endl;
	t2.display();	
	
	test t3=t1;	//copy constructor call	in one ways
	cout<<"\nValues at t3 object="<<endl;
	t3.display();	
		
	test t4(t1);//copy constructor call	in another ways
	cout<<"\nValues at t4 object="<<endl;
	t4.display();
}
