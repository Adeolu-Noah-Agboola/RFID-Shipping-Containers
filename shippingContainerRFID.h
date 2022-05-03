#pragma once
#include "shipContainer.h"
#include <vector>

class shippingContainerRFID : public shipContainer {
private:
	vector<string> addedItems;
	vector<int> addedQuantities;
public:
	void addItems(string);
	string getContentList();
};

