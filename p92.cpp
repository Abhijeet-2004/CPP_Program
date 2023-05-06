/*Rotate the given array 'a' by k steps , where k is non-negative .
note:k can be grater than n as well where n is the size of araay 'a'.*/
#include<iostream>
using namespace std;
int main()
{
  int array[]={1,2,3,4,5};
  int size=5,k=2;
  k=k%size;//k can be greater than size
  int ansarray[size],j=0;
  for(int i=size-k;i<size;i++)//inserting last k element in ansarray
  {
      ansarray[j++]=array[i];
  }
  for(int i=0;i<size-k;i++)//insert first size-k element in ansarray
  {
    ansarray[j++]=array[i];
  }
  for(int tem:ansarray)
  {
    cout<<tem<<" ";
  }
  return 0;
}
