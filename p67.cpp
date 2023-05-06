//WAP to find the sum of four numbers using default argument passing in member function
#include<iostream>
using namespace std;
class operation{
	public:
	int sum(int a=10,int b=20,int c=30,int d=40)
	{
		return a+b+c+d;
	}
};
int main()
{
	operation obj;
	cout<<"Sum of four numbers using default argument \n";
	cout<<obj.sum(22,33,44,55)<<endl;
	cout<<obj.sum(12,32,34)<<endl;
	cout<<obj.sum(6,9)<<endl;
	cout<<obj.sum(1)<<endl;
	cout<<obj.sum();
	return 0;
}
