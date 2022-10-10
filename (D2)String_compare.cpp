#include <iostream>
using namespace std;
void relationalOperation(string s1, string s2)
{
    if (s1 != s2)
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " Not equal to " << s2 << endl;
        else
            cout << s2 << " Not equal to " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}
int main()
{
    string s1("Naruto");
    string s2("Sasuke");
    relationalOperation(s1, s2);
    string s3("Naruto");
    string s4("Naruto");
    relationalOperation(s3, s4);
    return 0;
}
