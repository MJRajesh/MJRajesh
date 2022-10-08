#include<iostream>
using namespace std;
class AddData
{
        protected:
                int num1, num2;
        public:
                void accept()
                {
                        cout<<"\n Enter First Number : ";
                        cin>>num1;
                        cout<<"\n Enter Second Number : ";
                        cin>>num2;
                }
};
class Addition: public AddData 
{
                int sum,product;
        public:
                void add()
                {
                        sum = num1 + num2;
                        product=num1*num2;
                }
                void display()
                {
                        cout<<"\n sum of Two Numbers : "<<sum;
                        cout<<"\n product of Two Numbers : "<<product;
                }
};
int main()
{
        Addition a;
        a.accept();
        a.add();
        a.display();
        return 0;
}
