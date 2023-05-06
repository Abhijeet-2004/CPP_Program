/* Write a program to create an integer array using new operator and find the
sum and average of array elements.
Written by Abhijeet
Date-25/12/2022 */
#include<iostream>
using namespace std;
class calculate
{
	int size;
	int *arr;
	int sum;
	float avg;
	public:
	calculate()
	{
		arr=new int[size];
		sum=avg=0;
	}
	void getData()
	{
		cout<<"Enter the the size of array=";
		cin>>size;
		cout<<"\nEnter element into array"<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<"\nValue of arr["<<i<<"]=";
			cin>>arr[i];
			sum+=arr[i];
		}
	}
	void result()
	{
		avg=float(sum)/size;
		cout<<"\nSum of array element is="<<sum<<endl;
		cout<<"\nAverage of array element is="<<avg;
		delete[]arr;
	}
};
int main()
{
	calculate obj;
	obj.getData();
	obj.result();
	return 0;
}
