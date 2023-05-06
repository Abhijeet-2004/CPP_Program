//Sort an array consiting of 0s and 1s.(method-1)
#include<iostream>
using namespace std;
int main()
{
	int size=10;
	int a[size]={1,1,0,1,0,0,1,1,1,0};
	int count_zero=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]==0)
		count_zero++;
	}
	for(int i=0;i<size;i++)
	{
		if(i<count_zero)
		a[i]=0;
		else
		a[i]=1;
	}
	cout<<"Sorted array is=";
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
	return 0;
}
