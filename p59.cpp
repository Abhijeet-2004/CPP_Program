//WAP to find Sum of four number by using default argument passing
#include<iostream>
using namespace std;
int sum(int a=1,int b=2,int c=3,int d=4){
	return a+b+c+d;
}
int main()
{
	int s;
	cout<<"Sum of four number by using default arguments concepts \n";
	cout<<sum(10,20,30,40)<<endl;
	cout<<sum(44,22,88)<<endl;
	cout<<sum(65,90)<<endl;
	cout<<sum(21)<<endl;
	cout<<sum();
	return 0;
}

