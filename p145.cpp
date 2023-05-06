#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file("exf1.txt",ios::out);
	for(int i=1;i<=10;i++)
	{
		file<<i<<endl;
	}
	file.close();
	file.open("exf1.txt",ios::in);
	string s;
	while(file)
	{
		getline(file,s);
		cout<<s<<endl;
	}
	file.close();
}
