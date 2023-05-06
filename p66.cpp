//WAP to find the factorial of a number
#include<iostream>
using namespace std;
class result{
	int x;
	public:
	void getData(){
		cout<<"Enter value of x=";
		cin>>x;
	}
	void fact()
	{
		int f=1;
		for(int i=1;i<=x;i++)
		f*=i;
		cout<<"\nFactorial of "<<x<<" is="<<f;
	}
};
int main()
{
	result obj;
	obj.getData();
	obj.fact();
	return 0;
}
