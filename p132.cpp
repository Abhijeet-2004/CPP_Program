#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
};
class test:public virtual student{
protected:
int m1,m2;	
};
class sports:virtual public student{
	protected:
		int score;
};
class result:public test,public sports{
	protected:
	int	total;
	public:
	void input();
	void show();		
};
void result::input(){
	cout<<"Enter roll,mark-1,mark-2,score respectively="<<endl;
	cin>>roll>>m1>>m2>>score;
}
void result::show(){
	total=m1+m2;
	cout<<"\nRoll="<<roll;
	cout<<"\nTotal="<<total;
	cout<<"\nscore="<<score;
}
int main()
{
	result obj;
	obj.input();
	obj.show();
	return 0;
}
