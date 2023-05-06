#include<iostream>
using namespace std;
#include<fstream>
int main(){
	fstream file;
	file.open("test1.txt",ios::out);
	file<<"Hello pupun ! How are you";
	file.close();
	file.open("test1.txt",ios::in);
	string c;
	while(!file.eof())
	{
		getline(file,c);
		cout<<c;
	}
	file.close();
}
