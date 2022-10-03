#include <iostream> 
using namespace std;
int main()
{
 int start = 1;
 int end = 10;
 int count = 0;
 int i = 1;

 cout << "Composite Numbers between " << start <<" and " << end <<": \n";
 for(start=start; start<=end; start++)
 {
  for(i=1; i<=start; i++)
  {
   if(start % i == 0)
    count++;
  }
  if(count > 2)
   cout << start << " ";
  count = 0;
 }
 
 return 0;
}
