//find the total number of triplets in the array whose sum is equal to the given value x .
#include<iostream>
using namespace std;
int main()
{
  int arr[50],s;
  cout<<"Enter the size of the array=";
  cin>>s;
  cout<<"\nEnter element into the array\n";
  for(int i=0;i<s;i++)
  {
    cout<<"\nValue of a["<<i<<"]=";
    cin>>arr[i];
  }
  int x,count=0;
  cout<<"\nEnter the value of x=";
  cin>>x;
  for(int i=0;i<s;i++)
  {
    for(int j=i+1;j<s;j++)
    {
      for(int k=j+1;k<s;k++)
      if((arr[i]+arr[j]+arr[k])==x)
      count++;
    }
  }
  cout<<"\nNumber of pair is ="<<count;
  return 0;
}
