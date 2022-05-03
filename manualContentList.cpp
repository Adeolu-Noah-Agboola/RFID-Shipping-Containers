#include "manualContentList.h"
#include <iostream>
using namespace std;
void manualContentList::setContentList(string container_contents) {
	contentsOfContainer = container_contents;
}
string manualContentList::getContentList() {
	return contentsOfContainer;
}
