#include<iostream>
using namespace std;
class AddAmount
{
int amnt;
public:
AddAmount()
{
amnt=50;
}
AddAmount(int a)
{
amnt=50;
amnt=a+amnt;
}
void print_amnt()
{
cout<<amnt<<endl;
}
};
int main()
{
AddAmount a1;
AddAmount a2(15);
a1.print_amnt();
a2.print_amnt();
return 0;
}
