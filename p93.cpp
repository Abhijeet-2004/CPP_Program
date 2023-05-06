/*Rotate the given array 'a' by k steps , where k is non-negative .
note:k can be grater than n as well where n is the size of araay 'a'.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  int size;
  cout<<"Enter the size of the vector=";
  cin>>size;
  cout<<"\nenter "<<size<<" elements\n";
  for(int i=0;i<size;i++)
  {
    int tem;
    cin>>tem;
    v.push_back(tem);
  }
  int k;
  cout<<"\nEnter the value of K=";
  cin>>k;
  k=k%v.size();
  reverse(v.begin(),v.end());
  reverse(v.begin(),v.begin()+k);
  reverse(v.begin()+k,v.end());
  for(int a:v)
  {
    cout<<a<<" ";
  }
}
