//Detecting end of file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("trial.txt",ios::out);
	file<<"Hay subham"<<endl;
	file<<"how are you?";
	file.close();
	file.open("trial.txt",ios::in);
	string str;
	while(!file.eof())
	{
		getline(file,str);
		cout<<str<<endl;
	}	
	file.close();
}
