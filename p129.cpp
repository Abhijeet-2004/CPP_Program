/* Write a program to implement virtual destructor
Written by Abhijeet
Date-26/12/2022 */
#include<iostream>
using namespace std;
class Base{
   public:
 virtual ~Base()
   {
       cout<<"Base class destructor is called";
   }
};
class Derived:public Base{
    public:
    ~Derived()
    {
        cout<<"Derived class destructor is called"<<endl;
    }
};
int main()
{
    Base *ptr=new Derived;
    delete ptr;
}
