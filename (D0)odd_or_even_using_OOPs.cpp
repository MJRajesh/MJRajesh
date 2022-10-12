#include<iostream>
#include<conio.h>
using namespace std;
class oddoreven
{
    int a,m,n;
    public
    {
    oddoreven()
    {
    cout<<"enter the start of range(m)";
    cin>>n;
    cout<<"enter the end of the rang(n)";
    cin>>m;
    }
    display()
    {
    if(m<n)
    {
        for(int i=m;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<i<<"odd";
            }
            else
            {
            cout<<i<<"even";
            }
                
        }
    }
    }
    default()
    {
    if(m>n)
    {
        cout<<"invalid:m must be smaller than n";
    }
    }
};
int main()
{
 oddoreven obj;
 obj.display();
 obj.default();
 return 0;
}
