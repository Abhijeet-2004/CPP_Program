/*Write a program to perform + operator overloading for string concatination
Written by Abhijeet
Date-24/12/2022 */
#include<iostream>
using namespace std;
class concat{
	string str;
	public:
	concat(){
	}
	concat(string stem)
	{
		str=stem;
	}
	concat operator +(concat obj)
	{
		concat tem;
		tem.str=str+obj.str;
		return tem;
	}
	void display()
	{
		cout<<str;
	}
};
int main()
{
	string s;
	cout<<"Enter a string=";
	getline(cin,s);
	concat t1(s);
	cout<<"\nEnter another string=";
	getline(cin,s);
	concat t2(s);
	concat t3;
	t3=t1+t2;//operator overloading
	//or
	//t3=t1.operator +(t2);
	cout<<"\nAfter concatinate both entered string new string is=";
	t3.display();
}
