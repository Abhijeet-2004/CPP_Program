#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float cost;
	char name[50];
	fstream file("item.txt",ios::out);
	cout<<"Enter item name=";
	cin>>name;
	file<<name<<endl;
	cout<<"\nEnter item cost=";
	cin>>cost;
	file<<cost;
	file.close();
	file.open("item.txt",ios::in);
	file>>name;
	cout<<name;
	file>>cost;
	cout<<cost;
	file.close();
}
