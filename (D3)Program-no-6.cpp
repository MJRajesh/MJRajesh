#include<iostream>
using namespace std;
class print{
 public:
  void output(int a, char b[20])
  {
   cout<<"Integer is "<<a<<endl;
   cout<<"Character is "<<b<<endl;
  }
  void output(char b[20], int a)
  {
   cout<<"Character is "<<b<<endl;
   cout<<"Integer is "<<a<<endl;
  }
};
int main()
{
 print obj;
 obj.output("Programming Skills", 10);
 obj.output(10, "Programming Skills");
}
