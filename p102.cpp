/* Check if we can partition the array into two subarrays with
equal sum. more fromally ,check that the prefix sum of a part of
the array is equal to the suffix sum of rest of the array*/
#include<iostream>
#include<vector>
using namespace std;
bool check_partition(vector<int> &v)
{
  int total_sum=0;
  for(int i=0;i<v.size();i++)
  {
    total_sum+=v[i];
  }
  int prefix_sum=0,suffix_sum;
  for(int i=0;i<v.size();i++)
  {
    prefix_sum+=v[i];
    suffix_sum=total_sum-prefix_sum;
    if(prefix_sum==suffix_sum)
    return true;
  }
  return false;
}
int main()
{
  int size;
  cout<<"Enter the size of array=";
  cin>>size;
  vector<int> v;
  cout<<"\nenter "<< size <<" element into array=\n";
  for(int i=0;i<size;i++)
  {
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
  bool tem=check_partition(v);
  (tem==1)?cout<<"\npartition exist":cout<<"\npartition does not exist";
  return 0;
}
