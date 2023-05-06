/* Given a marttix 'a' of dimension n X m and 2 coordinates
(l1,r1) and (l2,r2). return the sum of the rectangle from
(l1,r1) to (l2,r2). (method-3)*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,m;
  cout<<"Enter the number of rows and column respectively=\n";
  cin>>n>>m;
  vector<vector<int>> vec(n,vector<int>(m));
  cout<<"\nEnter element into vector\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<endl<<"value of vec["<<i<<"]["<<j<<"]=";
      cin>>vec[i][j];
    }
  }
  //prefix sum of martrix row wise
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      vec[i][j]+=vec[i][j-1];
    }
  }
  //prifix sum of martrix column wise
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      vec[i][j]+=vec[i-1][j];
    }
  }
  int l1,l2,r1,r2;
  cout<<"\nEnter coordinates (l1,r1)=\n";
  cin>>l1>>r1;
  cout<<"\nEnter another coordinates (l2,r2)=\n";
  cin>>l2>>r2;
int topSum=0,leftSum=0,topLeftSum=0;
if(l1!=0)
topSum=vec[l1-1][r2];
if(r1!=0)
leftSum=vec[l2][r1-1];
if(l1!=0&&r1!=0)
topLeftSum=vec[l1-1][r1-1];
int sum=vec[l2][r2]-topSum-leftSum+topLeftSum;
  cout<<"\nSum of the given rectangle elements is=" <<sum;
  return 0;
}
