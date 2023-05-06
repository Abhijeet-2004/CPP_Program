//WAP give to number a and b ,the calculate a^b;
#include<iostream>
using namespace std;
int main()
{
	int a,b,res=1;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		res*=a;
	}
	cout<<"\n"<<a<<"^"<<b<<"="<<res;
}
