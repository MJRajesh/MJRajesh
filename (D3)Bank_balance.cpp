#include<iostream>
using namespace std;
class bank
{
    public:
    int getbal()
    {
        return 0;
    }
};
class bank1 : public bank
{
    int amount;
    public:
    bank1(int a)
    {
        amount=a;
    }
    int getbal()
    {
        return amount;
    }
};
class bank2 : public bank
{
    int amount;
    public:
    bank2(int b)
    {
        amount=b;
    }
    int getbal()
    {
        return amount;
    }
};
class bank3 : public bank
{
    int amount;
    public:
    bank3(int c)
    {
        amount=c;
    }
    int getbal()
    {
        return amount;
    }
};
int main()
{
    bank1 a(1000);
    bank2 b(2500);
    bank3 c(4000);
    cout<<a.getbal()<<endl;
    cout<<b.getbal()<<endl;
    cout<<c.getbal()<<endl;
    return 0;
}
