#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
 int num = 19;
 int copyNum = num;
 int digits = 0;
 int remainder = 0;
 int total = 0;

 // find number of digits in num variable
 while(copyNum != 0)
 {
  digits++;
  copyNum = copyNum / 10;
 }
 copyNum = num;

 // slice the numbers from last digits
 while(copyNum != 0)
 {
  remainder = copyNum % 10;
  total += (int) pow(remainder, digits);
  copyNum = copyNum / 10;
 }

 // result
 if(num == total)
  cout << num << " is an armstrong number";
 else 
  cout << num << " is not an armstrong number";
 return 0;
}
