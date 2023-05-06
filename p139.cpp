#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50];
	fstream file("file1.txt",ios::out);
	file<<"Hello Ravenshaw"<<endl;
	file<<"Hello students";
	file.close();
	file.open("file1.txt",ios::in);

	while(file)
	{
		file.getline(name,50);
		cout<<name<<endl;
	}
	file.close();
}
