//Write a program to distinguish the properties of static and non static class members.
#include<iostream>
using namespace std;
class Test{
	public:
	//static data member declaration
	static int sdm;
	//non static data member declaration
	int nsdm=10;
	//static member function 
	static void smf()
	{
		//only access static data members
		cout<<sdm<<endl;
		
		//can't access non static data members
		//cout<<nsdm<<endl;
	}
	//Non static member function 
	void nsmf()
	{
		//can access static data members
		cout<<sdm<<endl;
		//can access non static data members
		cout<<nsdm<<endl;
	}
};
//Initialize static data member outside
int Test::sdm=20;

//Can't be initialize non static data member outside
//int Test::nsdm=10;

int main()
{
	//can access static data members without creating object
	cout<<Test::sdm<<endl;
	
	//cann't access non static data members without creating object
	//cout<<Test::nsdm;
	
	//can call static member function without creating object
	Test::smf();
	
	//cann't call non static member function without creating object
	//Test::nsmf();
	
	//Both static and non static data members and member function access through class object
	Test obj;
	cout<<obj.sdm<<endl;
	cout<<obj.nsdm<<endl;
	obj.smf();
	obj.nsmf();
	
	return 0;
}
