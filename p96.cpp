//Sort an array consiting of 0s and 1s.(method-2)
#include<iostream>
using namespace std;
int main()
{
	int size=10;
	int a[size]={1,1,0,1,0,0,1,1,1,0};
	for(int i=0,j=size-1;i<j;)
	{
		if(a[i]==1&&a[j]==0)
		{
		a[i++]=0;
		a[j--]=1;
		}
		if(a[i]==0)
		i++;
		if(a[j]==1)
		j--;
	}
	cout<<"Sorted array is=";
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
}
