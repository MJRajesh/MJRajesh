//full pyramid+inverted full pyramid using oops concepts
#include <iostream>
using namespace std;
class pattern
{
    int space,n,rows;
    public:
    getdata()
    {
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter thr characters to be print";
    cin>>n;
    }
    void display()
    {
    for(int i = rows, k = 0; i >=1; --i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << n;
            ++k;
        }
        cout << endl;
    }
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << n;
            ++k;
        }
        cout << endl;
    } 
    }
};
int main()
{
    pattern s;
    s.getdata();
    s.display();
    return 0;
}
