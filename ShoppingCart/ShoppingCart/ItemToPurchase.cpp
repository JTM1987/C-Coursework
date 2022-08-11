#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase() {
	itemName = "";
	itemPrice = 0;
	itemQuantity = 0;
}

void ItemToPurchase::SetName(std::string s) {
	itemName = s;
}

void ItemToPurchase::SetPrice(int a) {
	itemPrice = a;
}

void ItemToPurchase::SetQuantity(int a) {
	itemQuantity = a;
}

std::string ItemToPurchase::GetName() {
	return itemName;
}

int ItemToPurchase::GetPrice() {
	return itemPrice;
}

int ItemToPurchase::GetQuantity() {
	return itemQuantity;
};