/* Given a marttix 'a' of dimension n X m and 2 coordinates
(l1,r1) and (l2,r2). return the sum of the rectangle from
(l1,r1) to (l2,r2). (method-2)*/
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
  int l1,l2,r1,r2;
  cout<<"\nEnter coordinates (l1,r1)=\n";
  cin>>l1>>r1;
  cout<<"\nEnter another coordinates (l2,r2)=\n";
  cin>>l2>>r2;
  int sum=0;
for(int i=l1;i<=l2;i++)
{
  if(r1!=0)
  sum+=(vec[i][r2]-vec[i][r1-1]);
  else
  {
    //vec[i][r1-1]=0;
      sum+=vec[i][r2];
  }
}
  cout<<"\nSum of the given rectangle elements is=" <<sum;
  return 0;
}
