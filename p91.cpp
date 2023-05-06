//WAP take input element into an array and print them using for-each loop
#include<iostream>
using std::cout;
using std::cin;
int main()
{
	int size;
	cout<<"Enter the size of the array=";
	cin>>size;
	int arr[size];
	cout<<"\nEnter element into array\n";
	for(int &tem:arr)
	{
		cin>>tem;
	}
	cout<<"\nTraversing in array=";
	for(int tem:arr)
	{
		cout<<tem<<" ";
	}
	return 0;
}
