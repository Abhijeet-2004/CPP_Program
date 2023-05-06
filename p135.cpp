#include<iostream>
using namespace std;
class number{
	int a,b,c;
	public:
		number(){
			a=b=c=10;
		}
		number(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		number(int x,int y)
		{
			a=x;
			b=y;
			c=30;
		}
		number(int x)
		{
			a=x;
			b=c=15;
		}
		void show()
		{
			cout<<"\nSum is="<<a+b+c;
		}
};
int main()
{
	number s1,s2(2,3,4),s3(5,6),s4(22);
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	return 0;
}
