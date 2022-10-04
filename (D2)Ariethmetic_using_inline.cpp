#include<iostream>
using namespace std;
inline int add(int s,int z)
{
    return s+z;
}
inline int sub(int s,int z)
{
    return s-z;
}
inline int mult(int s,int z)
{
    return s*z;
}
inline int divi(int s,int z)
{
    return s/z;
}
inline int mod(int s,int z)
{
    return s%z;
}
int main()
{
    int s,z;
    cout<<"Enter the A value";
    cin>>s;
    cout<<"Enter the B value";
    cin>>z;
    cout << "Addition       : " << add(s,z) << "\n";
    cout << "subracction    : " << sub(s,z) << "\n";
    cout << "multiplication : " << mult(s,z) << "\n";
    cout << "Division       : " << divi(s,z) << "\n";
    cout << "Modulus        : " << mod(s,z) << "\n";
    return 0;
}
