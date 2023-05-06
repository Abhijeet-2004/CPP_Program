//Sequentially read and write
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	fstream file;
	file.open("trial1.txt",ios::out);
	char str[50];
	cout<<"Enter string=";
	cin.getline(str,50);
	for(int i=0;i<strlen(str);i++)
	{
		file.put(str[i]);
	}
	file.close();
	file.open("trial1.txt",ios::in);
	char ch;
	while(!file.eof())
	{
		file.get(ch);
		cout<<ch;
	}	
	file.close();
}
