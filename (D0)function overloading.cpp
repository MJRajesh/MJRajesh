#include<iostream>
#include<conio.h>
using namespace std;

void add(int a,int b)
{
	cout<<"sum: "<<(a+b);
}
void add(int a,int b, int c)
{
	cout<<"sum: "<<(a+b+c);
}
void add(double a, double b)
{
	cout<<"sum: "<<(a+b);
}

int main()
{
	add(10,20);
	add(10, 20,39);
	add(10.4,10.5);
}
