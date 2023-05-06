/*Given an integers array 'a' ,return the prefix sum/running sum
in the same array without creating a new array.*/
#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of the array=";
	cin>>size;
	int arr[size];
	cout<"\enter element into array:";
	for(int i=0;i<size;i++)
	{
		cout<<"\nvalue of a["<<i<<"]=";
		cin>>arr[i];
	}
	for(int i=1;i<size;i++)
	{
		arr[i]+=arr[i-1];
	}
	cout<<"\nprefix sum array is=";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
