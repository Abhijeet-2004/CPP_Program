//Print a martrix in a spiral order
#include<iostream>
#include<vector>
using namespace std;
void spiralOrderPrint(vector<vector<int>> &vec)
{
  int left=0,right=vec[0].size()-1,top=0,buttom=vec.size()-1;
  int direction=0;
  cout<<"\nPrinting martrix in spiral order=\n";
  while(left<=right&&top<=buttom)
  {
    //left->right
    if(direction==0)
    {
      for(int col=left;col<=right;col++)
      {
        cout<<vec[top][col]<<" ";
      }
      top++;
    }
    //top->buttom
    else if(direction==1)
    {
      for(int row=top;row<=buttom;row++)
      {
        cout<<vec[row][right]<<" ";
      }
      right--;
    }
    //right->left
    else if(direction==2)
    {
      for(int col=right;col>=left;col--)
      {
        cout<<vec[buttom][col]<<" ";
      }
      buttom--;
    }
    //buttom->top
    else
    {
      for(int row=buttom;row>=top;row--)
      {
        cout<<vec[row][left]<<" ";
      }
      left++;
    }
    direction=(direction+1)%4;
  }
}
int main()
{
  int m,n;
  cout<<"Enter number of rows and column respectively=\n";
  cin>>m>>n;
  vector<vector<int>> v(m,vector<int>(n));
  cout<<"\nEnter element into martrix "<<m<<"X"<<n<<"\n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>v[i][j];
    }
  }
  spiralOrderPrint(v);
}
