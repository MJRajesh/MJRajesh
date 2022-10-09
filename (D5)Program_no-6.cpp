#include<iostream>
using namespace std;
class RBI {
	public:
		int min_interest;
		int min_balance;
		int max_withdrawal;
		RBI() {
			min_interest = 4;
			min_balance = 1000;
			max_withdrawal = 10000;
		}
};
int main() {
	RBI obj;
	cout<<"Minimum interest rate set by RBI: "<<obj.min_interest<<"%";
	cout<<"\nMinimum balance allowed: Rs."<<obj.min_balance;
	cout<<"\nMaximum withdrawal limit: Rs."<<obj.max_withdrawal;
	return 0;
}
