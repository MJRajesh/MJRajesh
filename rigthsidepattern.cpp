#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, d;
    
    cout << " Input number of rows: ";
    cin >> rows;
    if (isdigit(rows) == false)
	{
	
	    for (i = 1; i <= rows; i++) 
	    {
	        for (j = 1; j <= rows - i; j++) 
	        {
	            cout << " ";
	        }
	        d = i;
	        for (j = 1; j <= i; j++) 
	        {
	            cout << d;
	            d--;
	        }
	        cout << endl;
	        for (j = 1; j <= i; j--) 
	        {
	            cout << d;
	            d++;
	        }
	        cout << endl;
	    }
	}
	else
	{
	    cout<<"Invalid input";
}
    
}
