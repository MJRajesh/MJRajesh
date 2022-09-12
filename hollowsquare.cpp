#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char ch,n;
cout<<"enter the character you want to print";
cin>>n;
cout<<"enter the the choice(h for hollow/f for full)";
cin>>ch;
if(ch=='f')
{
for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << n;
		}
		cout << "\n";
	}
 	return 0;
}

else if(ch=='h')
{
for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 ||
                j == 1 || j == 5)        
                cout << n;            
            else
                cout << " ";
        }
        cout << endl;
    }

}
return 0;
}
