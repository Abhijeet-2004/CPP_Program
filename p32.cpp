// Swapping of two numbers using third variable
#include<iostream>
using namespace std;
int main() {
  int a,b;
  cout<<"a:";
  cin>>a;
  cout<<"b:";
  cin>>b;
int tem;
tem=a;
a=b;
b=tem;
cout<<"\nAfter Swapping:\n";
cout<<"a:"<<a<<endl;
cout<<"b:"<<b<<endl;
  return 0;
}
