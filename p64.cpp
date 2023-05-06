#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the n point of series(1-2+3-4+.....n)=";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		sum-=i;
		else
		sum+=i;
	}
	cout<<"\nSum of the series is="<<sum;
	return 0;
}
