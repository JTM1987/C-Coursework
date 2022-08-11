#pragma once
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
	std::string itemName;
	int itemPrice;
	int itemQuantity;

public:

	ItemToPurchase();

	void SetName(std::string);

	void SetPrice(int price);

	void SetQuantity(int quantity);

	std::string GetName();

	int GetPrice();

	int GetQuantity();
};
#endif