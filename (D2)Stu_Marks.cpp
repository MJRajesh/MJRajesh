#include<iostream>
using namespace std;
int main()
{
	int python,cprogram,mathematics,physics,total;
	float percent;
	cout<<"Enter marks of python";
	cin>>python;
	cout<<"enter marks of c program";
	cin>>cprogram;
	cout<<"enter marks of mathematics";
	cin>>mathematics;
	cout<<"enter marks of physics";
	cin>>physics;
	total= python+cprogram+mathematics+physics;
	cout<<"total = "<<total<<endl;
	percent=(total)/4.0;
	cout<<"percent = "<<percent<<endl;
	if(percent>=90)
	{
		cout<<"Grade=A";
	}
	else if(percent>=80)
	{
		cout<<"Grade=B";
	}
	else if(percent>=70)
	{
		cout<<"Grade=C";
	}
	else if(percent>=60)
	{
		cout<<"Grade=D";
	}
	else if(percent>=40)
	{
		cout<<"Grade=E";
	}
	else
	{
		cout<<"Gread F";
	}
}
