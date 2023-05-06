//printing star pattern without using loop
#include<iostream>
using namespace std;
void column(int j);
void rows(int i,int j)
{ 
	if(i==0)
	return;
	column(j);
	cout<<endl;
	rows(i-1,j+1);
}
void column(int n)
{
	if(n==0)
	return;
	cout<<"* ";
	column(n-1);
}
int main()
{
	int n;
	cout<<"Enter number of rows=";
	cin>>n;
	rows(n,1);
}
