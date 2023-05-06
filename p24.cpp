/*WAP in c++ using class to accept the Name,Roll & mark 
of 5 student from the user and display them as output*/
#include<iostream>
using namespace std;
class student
{
	string name;
	int roll;
	float mark;
	public:
	void getdata();
	void putdata();
};
void student::getdata()
{
	cout<<"Enter name=";
	fflush(stdin);
	getline(cin,name);
	cout<<"Enter roll=";
	cin>>roll;
	cout<<"Enter mark=";
	cin>>mark;
}
void student::putdata()
{
	cout<<"Name="<<name<<"\tRoll="<<roll<<"\tmark="<<mark<<endl;
}
int main()
{
	student obj[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter details of student-"<<i+1<<endl;
		obj[i].getdata();
	}
	cout<<"Details of students"<<endl;
	for(i=0;i<5;i++)
	{
		
		obj[i].putdata();
	}
	return 0;
}
