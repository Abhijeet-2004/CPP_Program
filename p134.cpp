#include<iostream>
using namespace std;
class serial{
	int scode;
	string title;
	int noep;
	public:
		serial(){
			cout<<"Enter serial code=";
			cin>>scode;
			cout<<"\nEnter serial title= ";
			fflush(stdin);
			getline(cin,title);
			cout<<"\nEnter number of episode=";
			cin>>noep;
		}
		serial(int s,string t,int ne){
			scode=s;
			title=t;
			noep=ne;
		}
		serial(serial &ob)
		{
			scode=ob.scode;
			title=ob.title;
			noep=ob.noep;
		}
		void display();
};
void serial::display(){
	cout<<"\nSerial code="<<scode;
	cout<<"\nSerial title is="<<title;
	cout<<"\nNumber of episode ="<<noep;
}
int main()
{
	serial s1;//default constructor call
	serial s2(123,"Shark Tank",40);//parameterized constuctor call;
	serial s3(s1);//copy constuctor call
	cout<<"\nDetails of s1"<<endl;
	s1.display();
	cout<<"\nDetails of s2"<<endl;
	s2.display();
	cout<<"\nDetails of s3"<<endl;
	s3.display();
	return 0;
}
