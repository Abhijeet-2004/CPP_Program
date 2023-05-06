/*Given a boolen 2D array,where each row is sorted.find
the row with maximum number of 1s.(method 1)*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximumOnesRow(vector<vector<int>> v){
  int maxOnes=INT_MIN;
  int maxOnesRow=-1;
  int column=v[0].size();
  for(int i=0;i<v.size();i++)
  {
  for(int j=0;j<v[i].size();j++)
  {
    if(v[i][j]==1)
    {
      int numberOfOnes=column-j;
      if(numberOfOnes>maxOnes)
      {
        maxOnes=numberOfOnes;
        maxOnesRow=i;
      }
      break;
    }
  }
  }
  return maxOnesRow;
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
