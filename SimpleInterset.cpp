#include <iostream>
using namespace std;
float SI(float, float, float);
int main(){
    float p, r, t, si;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period: ";
    cin >> t;
    si = SI(p, r, t);
    cout << "Simple interest is:" << si << endl;
    return 0;
}
float simpleIntere(float a, float b, float c){
    return (a * b * c) / 100;
}
