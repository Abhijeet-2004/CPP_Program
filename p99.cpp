/*Given an integer array 'a' sorted in non-decreaseing order, return
an array of the squares of each number sorted in non-decreasing
order.*/
#include<iostream>
#include<vector>
using namespace std;
void square_sort(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		v[i]*=v[i];
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
		if(v[i]>v[j])
		{
			v[i]=v[i]^v[j];
			v[j]=v[i]^v[j];
			v[i]=v[i]^v[j];
		}
		}
	}
	return;
}
int main()
{
	int size;
	cout<<"Enter the size of the array=";
	cin>>size;
	vector<int> v;
	cout<<"\nenter "<<size <<" element into array:"<<endl;
	for(int i=0;i<size;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	square_sort(v);
	cout<<"\nnew array is=\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
