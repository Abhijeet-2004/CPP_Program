#include<iostream>
using namespace std;
class sum{
	public:
	int res(int,int);
};
int sum::res(int a,int b)
{
	return a+b;
}
int main()
{
	sum obj;
	cout<<"Sum="<<obj.res(10,20);
	return 0;
}
