#include<iostream>
using namespace std;

int main()
{
	int i,j,rownum,space;
	cout<<"Enter the number of rows: ";
	cin>>rownum;
	space = rownum-1;
	for(i=1;i<=rownum;i++)
	{
		for(j=1;j<=space;j++)
		cout<<" ";
		space--;
		for(j=1;j<=(2*i-1);j++)
		cout<<"*";
		cout<<endl;
	}
	space=1;
	for(i=1;i<=(rownum-1);i++)
	{
		for(j=1;j<=space;j++)
		cout<<" ";
		space++;
		for(j=1;j<=(2*(rownum-i)-1);j++)
		cout<<"*";
		cout<<endl;
		
	}
	cout<<endl;
	return 0;
}
