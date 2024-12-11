//#include<iostream>
//using namespace std;
//
//class Ship {
//	string ShipName, BuiltYear;
//public:
//	Ship(string name, string year) :ShipName(name), BuiltYear(year) {}
//
//	string getShipName() { return ShipName; }
//	string getBuiltYear() { return BuiltYear; }
//
//	void setShipName(string name) { ShipName = name; }
//	void setBuiltYear(string year) { BuiltYear = year; }
//
//	virtual void Print() { 
//		cout << "Ship Name: " << ShipName << endl;
//		cout << "Built Year: " << BuiltYear << endl;
//	}
//};
//
//class CruiseShip :public Ship {
//	int MaxPassengers;
//public:
//	CruiseShip(string n, string y, int Max) :Ship(n, y), MaxPassengers(Max) {}
//
//	int getPassengers() { return MaxPassengers; }
//	void setPassengers(int P) { MaxPassengers = P; }
//
//	void Print() {
//		cout << "Ship Name: " << getShipName() << endl;
//		cout << "Maximum Number of Passengers: " << MaxPassengers << endl;
//	}
//};
//
//class CargoShip :public Ship {
//	int Capacity;
//public:
//	CargoShip(string n, string y, int c) : Ship(n, y), Capacity(c) {}
//
//	int getCapacity() { return Capacity; }
//	void setCapacity(int C) { Capacity = C; }
//
//	void Print() {
//		cout << "Ship Name: " << getShipName() << endl;
//		cout << "Ship's Cargo Capacity in Tonnage: " << Capacity << endl;
//	}
//};
//
//int main() {
//	const int Number = 3;
//	Ship* ship[Number];
//
//	ship[0] = new Ship("PFA", "2021");
//	ship[1] = new CruiseShip("Hello", "2023", 200);
//	ship[2] = new CargoShip("Hmm", "2020", 20000);
//
//	for (int i = 0; i < Number; i++) {
//		ship[i]->Print();
//		cout << endl;
//	}
//
//	for (int i = 0; i < Number; i++) {
//		delete ship[i];
//		ship[i] = nullptr;
//	}
//
//	return 0;
//}