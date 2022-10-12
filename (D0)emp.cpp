#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
	int id	;
	public:
		emp()
		{
			cout<<"enter the id";
			cin>>id;
		}
		void display()
		{
			if(id==123)
			{
				cout<<"id verifed";
			}
			else
			{
				cout<<"invalid id";
			}
		}
};
int main()
{
	emp s;
	s.display();
	return 0;
}
