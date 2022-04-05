#include <iostream>
#include <string>
#include "License.h"

using namespace std;

int main() {
	License drivers;
	string userInput;

	cout << "Input first name: ";
	cin >> userInput;
	drivers.setFirstName(userInput);

	cout << "Input last name: ";
	cin >> userInput;
	drivers.setLastName(userInput);

	cout << "Input street address: ";
	getline(cin, userInput);
	getline(cin, userInput);
	drivers.setAddress(userInput);

	cout << "Input city: ";
	cin >> userInput;
	drivers.setCity(userInput);

	cout << "Input state: ";
	cin >> userInput;
	drivers.setState(userInput);

	cout << "Input zip code: ";
	cin >> userInput;
	drivers.setZip(userInput);

	cout << "Input driver's license number: ";
	cin >> userInput;
	drivers.setLicNum(userInput);

	cout << endl << endl;
	cout << "PA DRIVER'S LICENSE: " << drivers.getLicNum() << endl;
	cout << drivers.getName() << endl;
	cout << drivers.getAddress() << endl;
	cout << drivers.getGeography() << endl;
}

/*
Input first name: John
Input last name: Smith
Input street address: 501 Sulley Dr
Input city: Springfield
Input state: OR
Input zip code: 56284
Input driver's license number: 48662857395


PA DRIVER'S LICENSE: 48662857395
John Smith
501 Sulley Dr
Springfield, OR 56284
*/