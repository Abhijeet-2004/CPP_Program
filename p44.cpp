/*Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/
#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	char op;
	cout<<"Enter number 1=";
	cin>>num1;
	cout<<"\nEnter number 2=";
	cin>>num2;
	cout<<"\nEnter an operator(+,-,*,/)=";
	cin>>op;
	switch(op)
	{
		case '+':
		cout<<endl<<num1<<op<<num2<<"="<<num1+num2;
		break;
		case '-':
		cout<<endl<<num1<<op<<num2<<"="<<num1-num2;
		break;
		case '*':
		cout<<endl<<num1<<op<<num2<<"="<<num1*num2;
		break;
		case '/':
		cout<<endl<<num1<<op<<num2<<"="<<num1/num2;
		break;
		default:
		cout<<"\nInvalid operator you entered";
	}
	return 0;
}
