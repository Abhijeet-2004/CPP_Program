#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string str;
int cnt=0;
ifstream original;
ofstream duplicate;
original.open("xyz.txt");
duplicate.open("duplicate.txt");
while(getline(original,str))
{
duplicate<<str;
cnt++;
}
if(cnt!=0)
cout<<"content coppied successfully";
else
cout<<"source file is not found";
original.close();
duplicate.close();
return 0;
}
