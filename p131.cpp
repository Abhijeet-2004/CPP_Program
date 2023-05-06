/*Create the person class.create some objects of this class (by taking infromation from the
user) . inherit the class person to create two classes Teacher and student class. Maintain
the respective infromation in the classes and create ,display and delete objects of these classes
(use Run time polymerphism).*/
#include<iostream>
#include<string.h>
using namespace std;
class person{
	string name;
	int age;
	public:
		void getData()
		{
			cout<<"Enter the name=";
			getline(cin,name);
			cout<<"\nEnter the age=";
			cin>>age;
		}
		void putData()
		{
			cout<<"\nName="<<name;
			cout<<"\nAge="<<age;
		}
};
class teacher:public person{
	int t_id;
	string sub;
	public:
		void DataT()
		{
			person::getData();
			cout<<"\nEnter the teacher id=";
			cin>>t_id;
			cout<<"\nEnter the subject taken by teacher=";
			cin>>sub;
		}
		void putT()
		{
			person::putData();
			cout<<"\nTeachar id="<<t_id;
			cout<<"\nSubject is="<<sub;
		}
};
class student:public person{
	int roll;
	int mark;
	public:
		void dataS(){
			person::getData();
			cout<<"\nEnter the Roll and mark respectively="<<endl;
			cin>>roll>>mark;
		}
		void putS()
		{
			person::putData();
			cout<<"\nRoll="<<roll;
			cout<<"\nMark="<<mark;
		}
		

};
int main()
{
	int ns,nt;
	cout<<"Enter the number of students=";
	cin>>ns;
	student *obs[ns];
	cout<<"\nEnter detalis of "<<ns<<" students"<<endl;
	for(int i=0;i<ns;i++)
	{
		cout<<"\nenter detalis of student-"<<i+1<<endl;
		obs[i]->dataS();
	}
	cout<<"\nEnter the number of teacher=";
	cin>>nt;
	teacher *obt[nt];
	cout<<"\nEnter details of "<<nt<<" teachers"<<endl;
	for(int i=0;i<nt;i++)
	{
	cout<<"\nEnter details of teacher-"<<i+1<<endl;
	obt[i]->DataT();
	}
	cout<<"\nEntered details of student and teacher \n";
	
	
}
