/*given a square martrix , turn it by 90 degrres in a clockwise
direction without using any extra space.

1 2 3         7 4 1
4 5 6     =>  8 5 2
7 8 9         9 6 3
*/
#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<vector<int>>&vec)
{
  //transpose martrix
  int n=vec.size();
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)//only lower diagonal element
    {
      swap(vec[i][j],vec[j][i]);
    }
  }
  //reverse ever rows
  for(int i=0;i<n;i++){
    reverse(vec[i].begin(),vec[i].end());
  }
  return ;
}
int main()
{
  int n;
  cout<<"Enter number of row=";
  cin>>n;
  vector<vector<int>>vec(n,vector<int>(n));
  cout<<"\nEnter element into vector=\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>vec[i][j];
    }
  }
  rotateArray(vec);
  cout<<"\nAfter rotation =\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }
}
