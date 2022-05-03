#include "shipContainer.h"
using namespace std;
void shipContainer::setContainerID(int container_id) {
	containerID = container_id;
}


int shipContainer::getContainerID() {
	return containerID;
}

string shipContainer::getContentList() {
	string empty=" ";
	return empty;
}