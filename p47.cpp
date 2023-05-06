//Write a program to find greatest among three number using nested if..else statement.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three number=\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		cout<<"\nGreatest number is="<<a;
		else
		cout<<"\nGreatest number is="<<c;
	}
	else
	{
		if(b>c)
		cout<<"\nGreatest number is="<<b;
		else
		cout<<"\nGreatest number is="<<c;
	}
	return 0;
}
