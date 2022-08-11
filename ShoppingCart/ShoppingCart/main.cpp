#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {

	
	string name;
	int price;
	int quantity;

	cout << "Enter the item name: ";
	
	getline(cin, name);
	
	cout << "Enter the item price: ";
	cin >> price;
	
	cout << "Enter the item quantity: \n";
	cin >> quantity;
	
	ItemToPurchase obj1;

	obj1.SetName(name);
	
	obj1.SetPrice(price);

	obj1.SetQuantity(quantity);

	cin.ignore();
	
	cout << "\nEnter the item name: ";
	
	getline(cin, name);
	
	cout << "Enter the item price: ";
	cin >> price;

	cout << "Enter the item quantity: ";
	cin >> quantity;

	

	ItemToPurchase obj2;

	obj2.SetName(name);

	obj2.SetPrice(price);

	obj2.SetQuantity(quantity);
	
	int totalCost = obj1.GetQuantity() * obj1.GetPrice() + obj2.GetQuantity() * obj2.GetPrice();

	cout << endl;
	cout << "TOTAL COST " << endl;
	cout << obj1.GetName() << " " << obj1.GetQuantity() << " @ $" << obj1.GetPrice() << " = $" << obj1.GetQuantity() * obj1.GetPrice();
	cout << "\n";
	cout << obj2.GetName() << " " << obj2.GetQuantity() << " @ $" << obj2.GetPrice() << " = $" <<obj2.GetQuantity() * obj2.GetPrice();
	cout << "\n\n\n";
	cout << "Total: $" << totalCost;

	return 0;
}