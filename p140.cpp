//Use of command prompt
#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
cout<<"number of arguments="<<argc<<endl;
cout<<"Arguments are"<<endl;
for(int i=0;i<argc;i++)
cout<<argv[i]<<endl;
}
