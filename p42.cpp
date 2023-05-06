/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/
#include<iostream>
using namespace std;
int main()
{
	int cp,sp;
	cout<<"Enter cost price=";
	cin>>cp;
	cout<<"Enter selling price=";
	cin>>sp;
	if(sp>cp)
	cout<<"\nProfit="<<sp-cp;
	else if(sp<cp)
	cout<<"\nLoss="<<cp-sp;
	else
	cout<<"\nNeither profit nor loss";
	return 0;
}
