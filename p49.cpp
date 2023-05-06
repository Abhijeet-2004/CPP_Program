//Write a program to print multiplication table from 1 to 10
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		cout<<"\nMultiplication table for "<<i<<" is:\n";
		for(int j=1;j<=10;j++)
		{
		cout<<i<<"*"<<j<<"="<<i*j<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
