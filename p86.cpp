#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int s;
	cout<<"Enter the size of the vector=";
	cin>>s;
	for(int i=0;i<s;i++)
	{
		int tem;
		cin>>tem;
		v.push_back(tem);
	}
	for(int i:v)
	{
		cout<<i<<endl;
	}
}
