#include<iostream>
#include<conio.h>
using namespace std;
class score
{
	public:
		int x,y,z,tot;
	float avg;
	score()	
	{
		cout<<"enter test mark 1: ";
		cin>>x;
		cout<<"enter test mark 2: ";
		cin>>y;
		cout<<"enter test mark 3: ";
		cin>>z;
		 tot=x+y+z;
		avg=tot/3;	
	}
	void display()
	{  
		cout<<"the total marks: "<<tot;
		cout<<"avg mark: "<<avg;
	}
};av
int main()
{
	score s;
	s.display();
    return 0;
}  
