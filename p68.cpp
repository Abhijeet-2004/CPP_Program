//WAP to find area of circle,triangle and rectangle using function overloading
#include<iostream>
using namespace std;
class calculate{
	public:
	float area(float r);
	float area(float l,float b);
	float area(float t,float b,float h);
};
float calculate::area(float r){
		return (3.141*r*r);
}
float calculate::area(float l,float b)
{
	return l*b;
}
float calculate::area(float t,float b,float h)
{
	return t*b*h;
}
int main()
{ 	calculate obj;
	float r,l,b;
	cout<<"Enter the radius of circle=";
	cin>>r;
	cout<<"Area of circle is ="<<obj.area(r);
	float bs,h;
	cout<<"\nEnter the base value of triangle=";
	cin>>bs;
	cout<<"\nEnter the height of triangle=";
	cin>>h;
	cout<<"\nArea of triangle="<<obj.area(0.5,bs,h);
	cout<<"\nEnter length and bredth of a rectangle=\n";
	cin>>l>>b;
	cout<<"\nArea of rectangle="<<obj.area(l,b);
	return 0;
}
