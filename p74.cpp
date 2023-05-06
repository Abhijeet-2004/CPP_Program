#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,k;
	cout<<"Enter number of row and column=\n";
	cin>>r>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1,k=i;j<=c;j++)
		{
			cout<<k<<" ";
			if(k==c)
			k=1;
			else
			k++;	
		}
		cout<<endl;
	}
}
