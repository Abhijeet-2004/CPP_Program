#include<iostream>
using namespace std;
class student
{
	public:
	int roll;
	string name;
};
int main()
{
	student s1;
	cout<<"Enter roll number=";
	cin>>s1.roll;
	cout<<"\nEnter your name=";
	fflush(stdin);
	getline(cin,s1.name);
	cout<<"\nyou entered roll="<<s1.roll;
	cout<<"\nyou entered name="<<s1.name;
	return 0;
}
