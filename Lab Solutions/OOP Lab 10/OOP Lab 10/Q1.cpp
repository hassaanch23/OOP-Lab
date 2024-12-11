//#include<iostream>
//#include<string>
//using namespace std;
//
//class Ship {
//protected:
//	string Name, BuiltYear;
//
//public:
//	Ship() {
//		Name = ""; BuiltYear = "";
//	}
//	Ship(string n, string date) :Name(""), BuiltYear("") {
//		Name = n; BuiltYear = date;
//	}
//
//	void setName(string n) {
//		Name = n;
//	}
//	void setDate(string date) {
//		BuiltYear = date;
//	}
//	string getName() {
//		return Name;
//	}
//	string BuiltDate() {
//		return BuiltYear;
//	}
//
//	virtual void Print() {
//		cout << "Ship Name: " << Name << endl;
//		cout << "Built Year: " << BuiltYear << endl;
//	}
//};
//
//class CruiseShip :public Ship {
//	int MaxPassengers;
//public:
//	CruiseShip() {
//		MaxPassengers = 0;
//	}
//
//	CruiseShip(string N, string year, int Passengers) : Ship(N, year) {
//		MaxPassengers = Passengers;
//	}
//	void getMaxPassenger(int Passenger) {
//		MaxPassengers = Passenger;
//	}
//	void setMaxPassengers(int maxP)
//	{
//		MaxPassengers = maxP;
//	}
//	void print()
//	{
//		cout << "Name: " << Name << endl;
//		cout << "Max Passengers: " << MaxPassengers << endl;
//	}
//};
//
//class CargoShip :public Ship {
//	int CargoStorage;
//
//public:
//	CargoShip(string n, string yB, int cStor) : Ship(n, yB)
//	{
//		CargoStorage = cStor;
//	}
//	void setCargoStorage(int carSt)
//	{
//		CargoStorage = carSt;
//	}
//	int getCargoStorage()
//	{
//		return CargoStorage;
//	}
//	void Print()
//	{
//		cout << "Name: " << Name << endl;
//		cout << "Cargo Storage in Tonnes: " << CargoStorage << endl;
//	}
//};
//
//int main()
//{
//	const int NUM_SHIPS = 3;
//	Ship* ships[NUM_SHIPS];
//
//	ships[0] = new Ship("PFA", "2012");
//	ships[1] = new CruiseShip("Indus Green", "2009", 2500);
//	ships[2] = new CargoShip("Titanic", "1941", 2000);
//
//	for (int i = 0; i < NUM_SHIPS; i++)
//	{
//		ships[i]->Print();
//		cout << endl;
//	}
//
//	for (int i = 0; i < NUM_SHIPS; i++)
//	{
//		delete ships[i];
//		ships[i] = nullptr;
//	}
//	return 0;
//}