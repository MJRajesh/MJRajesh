#include <iostream>
using namespace std;
class vehicle {
	public:
		int mileage;
		int price;
};
class car : public vehicle {
	public:
		int ownership_cost;
		int warranty;
		int seating_capacity;
		string fuel_type;
};
class bike : public vehicle {
	public:
		int num_cylinders;
		int num_gears;
		string cooling_type;
		string wheel_type;
		int tank_size;
};
class audi : public car {
	public:
		string model_type;
};
class ford : public car {
	public:
		string model_type;
};
class bajaj : public bike {
	public:
		string make_type;
};
class tvs : public bike {
	public:
		string make_type;
};
int main() {
	audi obj1;
	obj1.mileage = 10;
	obj1.price = 20000;
	obj1.ownership_cost = 10000;
	obj1.warranty = 5;
	obj1.seating_capacity = 4;
	obj1.fuel_type = "petrol";
	obj1.model_type = "audi1";
	ford obj2;
	obj2.mileage = 12;
	obj2.price = 30000;
	obj2.ownership_cost = 20000;
	obj2.warranty = 3;
	obj2.seating_capacity = 5;
	obj2.fuel_type = "diesel";
	obj2.model_type = "ford1";
	bajaj obj3;
	obj3.mileage = 20;
	obj3.price = 10000;
	obj3.num_cylinders = 2;
	obj3.num_gears = 4;
	obj3.cooling_type = "air";
	obj3.wheel_type = "spokes";
	obj3.tank_size = 12;
	obj3.make_type = "bajaj1";
	tvs obj4;
	obj4.mileage = 18;
	obj4.price = 15000;
	obj4.num_cylinders = 2;
	obj4.num_gears = 5;
	obj4.cooling_type = "liquid";
	obj4.wheel_type = "alloys";
	obj4.tank_size = 11;
	obj4.make_type = "tvs1";
	cout << "Audi car information: " << endl;
	cout << "Mileage: " << obj1.mileage << endl;
	cout << "Price: " << obj1.price << endl;
	cout << "Ownership cost: " << obj1.ownership_cost << endl;
	cout << "Warranty: " << obj1.warranty << endl;
	cout << "Seating capacity: " << obj1.seating_capacity << endl;
	cout << "Fuel type: " << obj1.fuel_type << endl;
	cout << "Model type: " << obj1.model_type << endl;
	cout << "Ford car information: " << endl;
	cout << "Mileage: " << obj2.mileage << endl;
	cout << "Price: " << obj2.price << endl;
	cout << "Ownership cost: " << obj2.ownership_cost << endl;
	cout << "Warranty: " << obj2.warranty << endl;
	cout << "Seating capacity: " << obj2.seating_capacity << endl;
	cout << "Fuel type: " << obj2.fuel_type << endl;
	cout << "Model type: " << obj2.model_type << endl;
	cout << "Bajaj bike information: " << endl;
	cout << "Mileage: " << obj3.mileage << endl;
	cout << "Price: " << obj3.price << endl;
	cout << "Number of cylinders: " << obj3.num_cylinders << endl;
	cout << "Number of gears: " << obj3.num_gears << endl;
	cout << "Cooling type: " << obj3.cooling_type << endl;
	cout << "Wheel type: " << obj3.wheel_type << endl;
	cout << "Tank size: " << obj3.tank_size << endl;
	cout << "Make type: " << obj3.make_type << endl;
	cout << "TVS bike information: " << endl;
	cout << "Mileage: " << obj4.mileage << endl;
	cout << "Price: " << obj4.price << endl;
	cout << "Number of cylinders: " << obj4.num_cylinders << endl;
	cout << "Number of gears: " << obj4.num_gears << endl;
	cout << "Cooling type: " << obj4.cooling_type << endl;
	cout << "Wheel type: " << obj4.wheel_type << endl;
	cout << "Tank size: " << obj4.tank_size << endl;
	cout << "Make type: " << obj4.make_type << endl;
	return 0;
}
