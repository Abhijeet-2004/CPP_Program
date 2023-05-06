//Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int sum=0,ans=0,i;
	for(i=1;i<=5;i++)
	{
		sum+=i;
	}
	i=0;
	while(sum>0)
	{
		int rem=sum%2;
		ans=ans+rem*pow(10,i);
		i++;
		sum/=2;
	}
	cout<<"Sum of the first 5 decimal numbers from 1 to 5 in binary format is="<<ans;
	return 0;
}
