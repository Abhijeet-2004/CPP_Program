//Find the second largest element int the given array
#include<iostream>
using namespace std;
int main()
{
  int arr[50],size;
  cout<<"Enter the size of the array(size must be greater than 2)=";
  cin>>size;
  cout<<"Enter elemnt into the array\n";
  for(int i=0;i<size;i++)
  {
    cout<<"\nvalue of a["<<i<<"]=";
    cin>>arr[i];
  }
  int largest_i=0;
  for(int i=0;i<size;i++)
  {
  if(arr[i]>arr[largest_i])
  largest_i=i;
  }
  int s_largest_i=0;
  for(int i=0;i<size;i++)
  {
    if(arr[i]!=arr[largest_i]&&arr[i]>arr[s_largest_i])
    {
      s_largest_i=i;
    }
  }
cout<<"\nSecond largest element in array="<<arr[s_largest_i];
  return 0;
}
