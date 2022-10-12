#include<iostream>
#include<string.h>
using namespace std;
class reverse
{
  char str[50], temp;
  int i, j;
  public:
  getdata()
  {
    cout << "Enter a string : ";
    gets(str);
  }
  rev()
  {
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
  }
  display()
  {
    cout << "\nReverse string : " << str;
  }
};
int main()
{
  reverse o;
  o.getdata();
  o.rev();
  o.display();
}
