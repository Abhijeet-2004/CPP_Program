//WAP for shows the factors of a number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number=";
	cin>>n;
	cout<<"\nFactors of "<<n<<" is =";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		cout<<i<<"\t";
	}
}
