#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("exf.txt",ios::out);
	cout<<"now put pointer at "<<file.tellp()<<" bytes"<<endl;
	file<<"Hello sahoo";
	cout<<"now put pointer at "<<file.tellp()<<" bytes"<<endl;
	file.seekp(-6,ios::end);
	cout<<"now put pointer at "<<file.tellp()<<" bytes"<<endl;
	file<<"Abhijeet";
	file.close();
	file.open("exf.txt",ios::in);
	cout<<"now get pointer at "<<file.tellg()<<" bytes"<<endl;
	file.seekg(5,ios::beg);
	cout<<"now get pointer at "<<file.tellg()<<" bytes"<<endl;
	cout<<"reading from file.."<<endl;
	string str;
	file>>str;
	cout<<str;
	file.close();
}
