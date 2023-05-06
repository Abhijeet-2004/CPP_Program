#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter a string=";
    cin.getline(str,50);
    fstream file;
    file.open("test.txt",ios::out);
    for(int i=0;i<strlen(str);i++)
    {
        file.put(str[i]);
    }
    file.close();
 	file.seekg(0);
	 file.open("test.txt",ios::in);
    char ch;
    while(!file.eof())
    {
    	file.get(ch);
    	cout<<ch;
	}
	file.close();
    return 0;
}

