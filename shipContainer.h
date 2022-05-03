#pragma once
using namespace std;
#include <iostream>
class shipContainer{
public:
	void setContainerID(int);
	int getContainerID();
	virtual string getContentList();
private:
	int containerID;
};

