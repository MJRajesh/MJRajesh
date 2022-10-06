#include<iostream>
using namespace std;
class Vector {
		int *arr;
		int size;
	public:
		Vector(int s) {
			size = s;
			arr = new int[size];
		}
		friend void read(Vector &v);
		friend void print(Vector &v);
};
void read(Vector &v) {
	int i;
	for(i=0; i<v.size; i++)
		cin>>v.arr[i];
}
void print(Vector &v) {
	int i;
	for(i=0; i<v.size; i++)
		cout<<v.arr[i]<<" ";
}
int main() {
	int n;
	cout<<"Enter the no of elements in an array: "<<endl;
	cin>>n;
	Vector v(n);
	int i;
	for(i=0; i<n; i++)
		cout<<"Enter the element "<<i+1<<" in an array: "<<endl;
	read(v);
	cout<<"The value of array : "<<endl;
	print(v);
}
