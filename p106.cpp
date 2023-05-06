//Given an integer n, return the first n rows of pascal's triangle.(method-1)
#include<iostream>
using namespace std;
int fact(int a)
{
  if(a==0||a==1)
  return 1;
  else
  return a*fact(a-1);
}
int main()
{
  int n;
  cout<<"Enter number of row in pascel triangle=";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      cout<<" ";
    }
    for(int j=0;j<=i;j++)
    {
      cout<<((fact(i))/(fact(j)*fact(i-j)))<<" ";
    }
    cout<<endl;
  }
  return 0;
}
