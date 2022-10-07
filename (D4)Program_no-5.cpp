#include<iostream>
using namespace std;
int main() {
   int a[7], i, s = 0;
   int *ptr;
   cout << "Enter the Numbers: ";
   for (i = 0; i < 7; i++) {
      cin >> a[i];
   }
   ptr = a;
   for (i = 0; i < 7; i++) {
      s = s + *(ptr + i);
   }
cout << "\nSum of Elements of Array: " << s;
}
