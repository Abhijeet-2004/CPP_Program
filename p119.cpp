//Write a program to show the method of accessing static private member function
#include<iostream>
using namespace std;
class test{
   private:
   static int x;
   static void spmf()
   {
       cout<<x<<endl;
   }
   public:
   void access()
   {
       spmf();//accessing static private member function
   }
   static void display()
   {
       spmf();//accessing static private member function
   }
};
int test::x=10;
int main()
{
    //using other public static member function
    test::display();
    //using other public non static member function through obj
    test obj;
    obj.access();
    return 0;
}
