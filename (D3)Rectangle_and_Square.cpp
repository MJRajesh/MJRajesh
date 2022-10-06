#include<iostream>
using namespace std;
class area
{
    public:
    static void print_area(int l, int b)
    {
        cout<<l*b<<endl;
    }
    static void print_area(int s)
    {
        cout<<s*s<<endl;
    }
};
int main()
{
    area::print_area(7);
    area::print_area(6,7);
    return 0;
}
