#include<iostream>
using namespace std;
void change(int s)
{
	s=50000;
	cout<<"\nValue in change() is="<<s;
}
int main()
{
	int sal=49900;
	change(sal);
	cout<<"\nvalue in main() is ="<<sal;
	return 0;
}
