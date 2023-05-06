/*Given an array of integers 'a' ,move all the even integers at the
beginning of the array followed by all the odd integers. The relative
order of odd or even integers does not matter. return any array that 
satisfies the condition.*/
#include<iostream>
using namespace std;
void changepos(int a[],int size)
{
	for(int i=0,j=size-1;i<j;)
	{
		if(a[i]%2!=0&&a[j]%2==0)
		{
		a[i]=a[i]^a[j];	
		a[j]=a[i]^a[j];	
		a[i]=a[i]^a[j];	
		i++;j--;
		}
		while(a[i]%2==0)
		i++;
		while(a[j]%2!=0)
		j--;
	}
	return;
}
int main()
{
	int size;
	cout<<"Enter the size of the array=";
	cin>>size;
	int a[size];
	cout<<"\nEnter element into array";
	for(int i=0;i<size;i++)
	{
		cout<<"\nvalue of a["<<i<<"]=";
		cin>>a[i];
	}
	changepos(a,size);
	cout<<"\nAfter changing new array is=\n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

