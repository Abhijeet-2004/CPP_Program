#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("pupun1.txt",ios::out);
	file<<"My name is Abhijeet sahoo";//writting in file
	file.close();
	fstream readfile;
	readfile.open("pupun1.txt",ios::in);
	string s;
	while(!readfile.eof())
	{
		getline(readfile,s);//reading from file
		cout<<s;
	}
	readfile.close();
	return 0;
}
