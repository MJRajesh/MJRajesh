#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int choice,m,n;
 cout<<"enter the choice: 1.multiplication 2.division";
 cin>>choice;
 cout<<"enter the number:";
 cin>>m;
 cout<<"enter the number upto which u want the table:";
 cin>>n;
 if(choice==1)
 {
   cout<<"multiplication table"<<"\n";
   for(int i=1;i<=n;i++)
   {
     cout<<i<<"*"<<m<<"="<<i*m;
     cout<<"\n";
   }
 }
 else if(choice==2)
 {
   cout<<"division table"<<"\n";
   for (int i=1;i<=n;i++)
   {
   cout<<m<<"/"<<i<<"="<<m/i;
   cout<<"\n";
   }
 }
 else
 {
   cout<<"enter correct choice:"<<"thank you!!" ;
 }
 getch();
 }
