/*WAP in c++ using class to accept the name ,roll & mark
of a student from the user and display them as output */
#include<iostream>
using namespace std;
class student{
	string name;
	int roll,mark;
	public:
	void get_data();
	void put_data();	
};
void student::get_data()
{
	cout<<"Enter your name=";
	getline(cin,name);
	cout<<"Enter your roll number=";
	cin>>roll;
	cout<<"Enter your mark=";
	cin>>mark;	
}
void student::put_data()
{
	cout<<"\nName="<<name;
	cout<<"\nRoll="<<roll;
	cout<<"\nMark="<<mark;
}
int main()
{
	student obj;
	obj.get_data();
	obj.put_data();
	return 0;
}
