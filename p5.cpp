#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter a number=";
	cin>>n;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
		cout<<n<<" is not a prime number";
		c++;
		break;
		}	
	}
	if(c==0)
	cout<<n<<" is a prime number";
	return 0;
}
