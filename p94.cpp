//Given Q queries , check if the number is present in the array or not
//Note: Value of all the elements in the array is less than 10 to the power 5
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array=";
  cin>>n;
  vector<int>v(n);
  cout<<"\nEnter "<<n<<" elements:\n";
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  const int N=1e5+10;
  vector<int>freq(N,0);
  for(int i=0;i<n;i++)
  {
    freq[v[i]]++;
  }
  int q;
  cout<<"\nEnter number of queries=";
  cin>>q;
  cout<<"\nEnter queries\n";
  while(q--)
  {
    int que_ele;
    cin>>que_ele;
    cout<<freq[que_ele]<<endl;
  }
}
