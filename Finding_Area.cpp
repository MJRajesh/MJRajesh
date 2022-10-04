#include<iostream>
using namespace std;
void area(float r)
{
	cout<<"\narea of circle : "<<3.14*r*r;
}
void area(int a)
{
	cout<<"\narea of square : "<<a*a;
}
void area(float l,float b)
{
	cout<<"\narea of rectangle : "<<l*b;
}
void area(int b1,int h)
{
	cout<<"\narea of triangle : "<<0.5*b1*h;
}
int main()
{
	float r,l,b;
	int a,b1,h;
	cout<<"Radius:";
	cin>>r;
	cout<<"Side:";
	cin>>a;
	cout<<"Length of rectangle:";
	cin>>l;
	cout<<"Breadth of the rectangle:";
	cin>>b;
	cout<<"Base of the triangle:";
	cin>>b1;
	cout<<"Height of the triangle:";
	cin>>h;
	
	area(r);
	area(a);
	area(l,b);
	area(b1,h);
	return 0;
}
