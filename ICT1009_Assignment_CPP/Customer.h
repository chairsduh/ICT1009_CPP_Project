#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <vector>
#include "Container.h"
using namespace std;

class Customer {
private:
	string name, company, country, portName;
	int age, day, month, year;
	vector<Container *>containerArray;
public:
	//Constructors
	Customer();
	Customer(string, int, string, string, string, int, int, int);
	//Getters & Setters
	string getName() const;
	int getAge() const;
	string getCompany() const;
	string getCountry() const;
	string getPortName() const;
	void setName(string);
	void setAge(int);
	void setCompany(string);

	//Methods
	bool updateCust(string, int, string);
	string getDate();
	void setDate(int, int, int);
};
#endif // ! CUSTOMER_H

