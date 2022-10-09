#include <iostream>
using namespace std;
class RBI {
	public:
		RBI() {
			cout << "RBI" << endl;
		}
};
class SBI : public RBI {
	public:
		SBI() {
			cout << "SBI" << endl;
		}
};
class ICICI : public RBI {
	public:
		ICICI() {
			cout << "ICICI" << endl;
		}
};
class PNB : public RBI {
	public:
		PNB() {
			cout << "PNB" << endl;
		}
};
int main() {
	SBI sbi;
	ICICI icici;
	PNB pnb;
	return 0;
}
