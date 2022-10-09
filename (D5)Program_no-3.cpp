#include<iostream>
using namespace std;
class Marks {
	private:
		int rollNumber;
	public:
		string name;
		int marks;
		static int count;
		Marks() {
			rollNumber = ++count;
		}
		int getRollNumber() {
			return rollNumber;
		}
};
int Marks::count = 0;

class Physics : public Marks {
	public:
		Physics() {
		}
};
class Chemistry : public Marks {
	public:
		Chemistry() {
		}
};
class Mathematics : public Marks {
	public:
		Mathematics() {
		}
};
int main() {
	int n, total;
	float avg;
	cout<<"Enter the number of students in class: ";
	cin>>n;
	Physics obj1[n];
	Chemistry obj2[n];
	Mathematics obj3[n];
	for(int i=0; i<n; i++) {
		cout<<"Enter the name of student: ";
		cin>>obj1[i].name;
		cout<<"Enter the marks of Physics: ";
		cin>>obj1[i].marks;
		cout<<"Enter the marks of Chemistry: ";
		cin>>obj2[i].marks;
		cout<<"Enter the marks of Mathematics: ";
		cin>>obj3[i].marks;
	}
	for(int i=0; i<n; i++) {
		total = obj1[i].marks + obj2[i].marks + obj3[i].marks;
		avg = total / 3.0;
		cout<<"Total marks of "<<obj1[i].name<<": "<<total<<endl;
		cout<<"Average marks of "<<obj1[i].name<<": "<<avg<<endl;
	}
	return 0;
}
