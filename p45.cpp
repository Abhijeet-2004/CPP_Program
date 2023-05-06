#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"Enter your mark=";
	cin>>mark;
	if(mark>=90&&mark<=100)
	cout<<"\nyour grade is A+";
	else if(mark>=80&&mark<90)
	cout<<"\nyour grade is A";
	else if(mark>=70&&mark<80)
	cout<<"\nyour grade is B+";
	else if(mark>=60&&mark<70)
	cout<<"\nyour grade is B";
	else if(mark>=50&&mark<60)
	cout<<"\nyour grade is C";
	else if(mark>=40&&mark<50)
	cout<<"\nyour grade is D";
	else if(mark>=30&&mark<40)
	cout<<"\nyour grade is E";
	else if(mark>=0&&mark<30)
	cout<<"\nyour grade is F";
	else
	cout<<"\nInvalid mark you entered error!";
	return 0;
}
