/*Write a program to copy contents of one file to another
Written by Abhijeet
date-10/01/2004 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream f1,f2;
	string s;
	f1.open("source.txt",ios::out);
	cout<<"Write something that enter into source file="<<endl;
	getline(cin,s);
	f1<<s;
	f1.close();
	f1.open("source.txt",ios::in);
	cout<<"Above content now going to copy to destination file......"<<endl;
	f2.open("destination.txt",ios::out);
	while(!f1.eof()){
		getline(f1,s);
		f2<<s;
	}
	f1.close();
	f2.close();
	cout<<"Content of source file copied to destination file successfully";
	return 0;
}
