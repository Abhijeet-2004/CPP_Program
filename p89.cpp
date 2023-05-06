//Find the unique number in a given array whrere all the elements are being repeated twice with one value being unique
#include<iostream>
using namespace std;
int main() {
int arr[]={2,3,1,2,6,3,1,2},ue,i,j;
for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{
    for(j=0;j<(sizeof(arr)/sizeof(arr[0]));j++)
    {
    if(i!=j)
    {
    if(arr[i]==arr[j])
    break;
    }
    }
    if(j==(sizeof(arr)/sizeof(arr[0])))
    ue=arr[i];
}
cout<<"Unique element is="<<ue;
  return 0;
}
