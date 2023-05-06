/* Given an array of integers of size n.Answer q queries where you
need to print the sum of values in a given range of indics from
l to r (both included).
Note: The values of l and r in queries follow l-based indexing. */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array=";
  cin>>n;
  vector<int>v(n+1,0);//due to 1-based indexing so n+1
  cout<<"\nenter "<<n <<" element=\n";
  for(int i=1;i<=n;i++)
  {
    cin>>v[i];
  }
  //calculate prefix sum array
  for(int i=1;i<=n;i++)
  {
    v[i]+=v[i-1];
  }
  int q;
  cout<<"\nEnter number of queries=";
  cin>>q;
  while(q--)
  {
    int l,r,ans=0;
    cout<<"\nEnter l and r respectively=\n";
    cin>>l>>r;
    //ans=prefixsumarray[r]-prifixsumarray[l-1]
    ans=v[r]-v[l-1];
    cout<<"\nrequired Answer is="<<ans;
  }
  return 0;
}
