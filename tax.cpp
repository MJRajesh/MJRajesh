#include<iostream>
#include<conio.h>
using namespace std;
//program for calculating a tax based on salary using a constructor
class income
{
	int sal,t;//data members
	public:
		income()//creating a constructor
		{
		}
	tax()//member function
	{
		cout<<"Enter the salary";
		cin>>sal;
		if(sal<=150000)
		{
			t=0;// zero percent tax for the salary which are smaller than a 150000
		}
		else if(sal<=300000)
		{
			t=(sal-150000)*10/100;// ten percent tax for the salary which are greater than a 150000 and smaller than a 300000
		}
		else if(sal<=500000)
		{
			t=150000*10/100+(sal-300000)*20/100;// twenty percent tax for the salary which are greater than a 300000 and smaller than a 500000
		}
		else
		{
			t=150000*10/100+200000*20/100+(sal-500000)*30/100;// thirty percent tax for the salary which are greater than 500000
		}
	}
	display()//creating member funtion for display the value
	{
		cout<<"The tax for your salary"<<sal<<"-s-"<<t<<endl;
	}
};
int main()//main funtion
	{
		income s1,s2;//creating two object
		s1.tax();
		s1.display();
		s2.tax();
		s2.display();
		return 0;
	}
