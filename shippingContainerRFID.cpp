#include "shippingContainerRFID.h"
#include <string>
void shippingContainerRFID::addItems(string input) {
	if (addedItems.empty()) {
		addedItems.push_back(input);
		addedQuantities.push_back(1);
		return;
	}
	else if (addedItems.size() > 0) {
		for (int i = 0; i < addedItems.size(); i++) {
			if (input == addedItems.at(i)) {
				addedQuantities.at(i) += 1;
				return;
			}
		}addedItems.push_back(input);
		addedQuantities.push_back(1);
		return;
	}
}
string shippingContainerRFID::getContentList() {
	string result;

	for (int i = 0; i < addedItems.size(); i++) {
		if (!result.empty()) result += " , ";

		if (addedQuantities[i] > 0)
		{
			result += to_string(addedQuantities[i]) + " " + addedItems[i];
		}

	}
	return result;
}