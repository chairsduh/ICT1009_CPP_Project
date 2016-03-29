#include <string>
#include <iostream>
#include <sstream>
#include "Customer.h"
using namespace std;

//Constructors
Customer::Customer() {
	this->name = "";
	this->age = 0;
	this->company = "";
}

//Getters & Setters
string Customer::getName() const{ return this->name; }
void Customer::setName(string name) { this->name = name; }

int Customer::getAge() const { return this->age; }
void Customer::setAge(int age) { this->age = age; }

string Customer::getCompany() const{ return this->company; }
void Customer::setCompany(string company) { this->company = company; }

string Customer::getCountry() const { return this->country; }
void Customer::setCountry(string country) { this->country = country; }

string Customer::getPortName() const { return this->portName; }
void Customer::setPortName(string portName) { this->portName = portName; }

string Customer::getDate() {
	stringstream ss;
	if (this->day >= 1 && this->day <= 9) {
		ss << "0" << this->day << "-";
	}
	else {
		ss << this->day << "-";
	}

	if (this->month >= 1 && this->month <= 9) {
		ss << "0" << this->month << "-";
	}
	else {
		ss << this->month << "-";
	}

	ss << this->year << " 00:00:00";

	return ss.str();
}