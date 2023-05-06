//using array of objects concept
#include<iostream>
using namespace std;
class book 
{
	string title;
	int price;
	public:
	void getdata();
	void printdata();
};
void book::getdata()
{
	fflush(stdin);
	cout<<"\nEnter book title=";
	getline(cin,title);
	cout<<"\nEnter book price=";
	cin>>price;
}
void book::printdata()
{
	cout<<"\nTitle="<<title;
	cout<<"\nprice="<<price;	
}
int main()
{
	book number[3];//array of objects
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter details of book-"<<i+1;
		number[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		cout<<"\ndetails of book-"<<i+1;
		number[i].printdata();
	}
	return 0;
}
