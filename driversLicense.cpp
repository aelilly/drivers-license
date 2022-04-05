// driversLicense.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "License.h"

void License::setFirstName(string fName) {
	firstName = fName;
}

void License::setLastName(string lName) {
	lastName = lName;
}

void License::setAddress(string add) {
	address = add;
}

void License::setCity(string citi) {
	city = citi;
}

void License::setState(string stat) {
	state = stat;
}

void License::setZip(string z) {
	zip = z;
}

void License::setLicNum(string licNum) {
	license = licNum;
}

string License::getName() const {
	return (firstName + " " + lastName);
}

string License::getAddress() const {
	return address;
}

string License::getGeography() const {
	return (city + ", " + state + " " + zip);
}

string License::getLicNum() const {
	return license;
}