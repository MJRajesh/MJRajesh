#include<iostream>
using namespace std;
class Student {
	public:
		int rollNo;
		Student(int r) {
			rollNo = r;
		}
};
class Test : public Student {
	public:
		float sub1, sub2;
		Test(float s1, float s2, int r) : Student(r) {
			sub1 = s1;
			sub2 = s2;
		}
};
class Result : public Test {
	public:
		float total;
		Result(float s1, float s2, int r) : Test(s1, s2, r) {
			total = sub1 + sub2;
		}
		void display() {
			cout << "Roll number :" << rollNo << endl;
			cout << "Total marks :" << total << endl;
		}
};
int main() {
	Result obj(10, 20, 5);
	obj.display();
	return 0;
}
