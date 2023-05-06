/*Given a boolen 2D array,where each row is sorted.find
the row with maximum number of 1s.(method 2)*/
#include<iostream>
#include<vector>
using namespace std;
int maximumOnesRow(vector<vector<int>> v){
  int leftmost_col=-1;
  int leftmost_row=-1;
  int col_no=v[0].size();
  int j=col_no-1;
  //finding leftmost one in first row
  for(j=col_no-1;j>=0;)
  {
    if(v[0][j]==1)
    {
      leftmost_col=j;
      leftmost_row=0;
      j--;
    }
    else
    break;
  }
  //finding leftmost in remaing rows
  for(int i=1;i<v.size();i++)
  {
    while(v[i][j]==1&&j>=0)
    {
      leftmost_col=j;
      leftmost_row=i;
      j--;
    }
  }
  return leftmost_row;
}
int main()
{
  int n,m;
  cout<<"enter number of rows and column=\n";
  cin>>n>>m;
  vector<vector<int>> vec(n,vector<int>(m));
  cout<<"\nEnter element into array=\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
  {
    cin>>vec[i][j];
  }
  }
  cout<<"maximum ones in row number="<<maximumOnesRow(vec);;
}
