//Write a program to find square and cube of a number using inline function
#include<iostream>
using namespace std;
inline int square(int x)
{
	return x*x;
}
inline int cube(int x)
{
	return x*x*x;
}
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"\nSquare of "<<num<<" is="<<square(num);
	cout<<"\nCube of "<<num<<" is="<<cube(num);
	
}
