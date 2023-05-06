#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int roll;
};
class exam{
	protected:
		int m1,m2,m3;
		char edate[10];
};
class sports{
	protected:
		char grade;
};
class result:private student,private exam,private sports{
	float per;
	public:
		void accept();
		void calc();
		void show();
};
void result::accept(){
	cout<<"Enter Roll=";
	cin>>roll;
	cout<<"\nEnter name=";
	fflush(stdin);
	getline(cin,name);
	cout<<"\nEnter marks of 3 subjects="<<endl;
	cin>>m1>>m2>>m3;
	cout<<"\nEnter exam date=";
	cin>>edate;
	cout<<"\nEnter grade=";
	cin>>grade;
}
void result::calc(){
	per=float(m1+m2+m3)/3;;
}
void result::show(){
	cout<<"\nRoll="<<roll;
	cout<<"\nName="<<name;
	cout<<"\npercentage="<<per;
	cout<<"\nGrade="<<grade;
}
int main()
{
	result obj;
	obj.accept();
	obj.calc();
	obj.show();
	return 0;
}
