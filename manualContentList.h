#pragma once
#include "shipContainer.h"
#include <iostream>
using namespace std;
class manualContentList :public shipContainer {
public:
	void setContentList(string);
	string getContentList();
private:
	string contentsOfContainer;
};

