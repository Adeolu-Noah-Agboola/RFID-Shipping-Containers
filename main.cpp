#include <iostream>
#include <string>
#include <fstream>
#include "shipContainer.h"
#include "manualContentList.h"
#include "shippingContainerRFID.h"
using namespace std;

void exp(shipContainer* [], int x);
int main() {
	shipContainer** ship;
	ship = new shipContainer * [6];

	manualContentList* manual;
	manual = new manualContentList[3];

	shippingContainerRFID* Rfid;
	Rfid = new shippingContainerRFID[3];

	for (int i = 0; i < 6; i++) {
		//first 3 manual list
		if (i == 0) {
			ship[i] = new manualContentList();
			manual[0].setContentList("1000 Lysol wipes");
			manual[0].setContainerID(100);
		}
		if (i == 1) {
			ship[i] = new manualContentList();
			manual[1].setContentList("1000 toilet paper");
			manual[1].setContainerID(200);
		}
		if (i == 2) {
			ship[i] = new manualContentList();
			manual[2].setContentList("500 70% hand sanitizers");
			manual[2].setContainerID(300);
		}
		// last 3 rfid
		if (i == 3) {
			ship[i] = new shippingContainerRFID();
			Rfid[0].addItems("fish crackers");
			Rfid[0].addItems("fish crackers");
			Rfid[0].setContainerID(400);
		}
		if (i == 4) {
			ship[i] = new shippingContainerRFID();
			Rfid[1].addItems("pineapple");
			Rfid[1].addItems("pineapple");
			Rfid[1].addItems("pears");
			Rfid[1].addItems("pears");
			Rfid[1].setContainerID(500);


		}
		if (i == 5) {
			ship[i] = new shippingContainerRFID();
			Rfid[2].addItems("mask");
			Rfid[2].addItems("mask");
			Rfid[2].addItems("mask");
			Rfid[2].addItems("chocolate bars");
			Rfid[2].addItems("chocolate bars");
			Rfid[2].addItems("chocolate bars");
			Rfid[2].setContainerID(600);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		ship[i] = new manualContentList();
		ship[i] = &manual[i];
	}

	for (int i = 0; i < 3; i++)
	{
		ship[i + 3] = new shippingContainerRFID();
		ship[i + 3] = &Rfid[i];
	}


	exp(ship, 6);

	return 0;

}
//function that iterates and outputs to a csv file
int numofcontainers = 6;
void exp(shipContainer* info[], int numofcontainers) {
	for (int i = 0; i < numofcontainers; i++) {
		cout << "Container " << info[i]->getContainerID() << " contains ";
		cout << info[i]->getContentList() << endl;
	}
	ofstream file;
	file.open("ContainerData.csv", ios::app);
	if (!file.is_open()) {
		cout << "Error opening the file";
	}
	for (int i = 0; i < numofcontainers; i++) {
		file << info[i]->getContainerID() << "," << info[i]->getContentList() << endl;
	}
	file.close();

}
	