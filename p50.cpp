//Write a program to print the result for series: 1!+2!+3!+....
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the nth point for series(1!+2!+3!+.....)=";
    cin>>n;
    int tem=1,sum=0;
    for(int i=1;i<=n;i++)
    {
        tem*=i;
        sum+=tem;
    }
    cout<<"\nSum of the series="<<sum;
    return 0;
}
