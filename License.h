#pragma once

using namespace std;
class License
{
private:
	string firstName, lastName;
	string address;
	string city, state, zip;
	string license;

public:
	void setFirstName(string);
	void setLastName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setLicNum(string);

	string getName() const;
	string getAddress() const;
	string getGeography() const;
	string getLicNum() const;
};

