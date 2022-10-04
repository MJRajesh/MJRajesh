#include <iostream.h>
int main()
{
int n=3,arr[]={},largest=arr[0] ;
cout<<"enter the three values: \n";
for (int i=0;i<n;i++){cin>>arr[i];}
int count=1 ;
while(count<3)
{
if (arr[count]>biggest)
biggest=arr[count];
++count ;
}
printf(“largest number = %d”,largest) ;
return 0;
}
