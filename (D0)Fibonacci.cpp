//Fibonscci series
#include <iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1,nextTerm=0;
    cout<<"Enter the number of terms: ";
    cin>>n;
    if(n>=0)
    {
        for(int i=1;i<=n;++i) 
        {
            if(i == 1) 
            {
                cout<<t1<<", ";
                continue;
            }
            if(i==2)
            {
                cout<<t2<<", ";
                continue;
            }
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;
            cout<<nextTerm<<", ";
        }
    }
    else if(n<0)
    {
        cout<<"we can't implement negative Fibonacci Series .Instead of creating negative fibonnace Series we can create a postive series then convert into a negative form that is a mathematically correct one";
    }
    return 0;
}
