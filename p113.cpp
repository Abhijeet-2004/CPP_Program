/*Given a positive integer n , generate an nXn martrix filed with
elements from 1 to n^2 in spiral order*/
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> spiralOrder(int n)
{
  vector<vector<int>> v(n,vector<int>(n));
  int left=0,right=n-1,top=0,buttom=n-1,tem=1,direction=0;
  while(left<=right&&top<=buttom)
  {
    if(direction==0)
    {
      for(int i=left;i<=right;i++)
      v[top][i]=tem++;
      top++;
    }
    else if(direction==1)
    {
      for(int i=top;i<=buttom;i++)
      v[i][right]=tem++;
      right--;
    }
    else if(direction==2)
    {
      for(int i=right;i>=left;i--)
      v[buttom][i]=tem++;
      buttom--;
    }
    else
    {
      for(int i=buttom;i>=top;i--)
      v[i][left]=tem++;
      left++;
    }
    direction=(direction+1)%4;
  }
  return v;
}
int main()
{
  int n;
  cout<<"Enter value of n=";
  cin>>n;
  vector<vector<int>>vec(n,vector<int>(n));
  vec=spiralOrder(n);
  cout<<"\nSpiral sequence martrix is =\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }
}
