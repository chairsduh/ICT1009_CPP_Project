#ifndef MINSHIPSSORT_H
#define MINSHIPSSORT_H
#include <vector>
#include <string>
#include "Customer.h"
#include "Ship.h"
using namespace std;

typedef struct DestinationType
{
	vector<Customer> custList;
	vector<Ship> shipList;
}Destination;

typedef struct ValidShipsType
{
	Customer cust;
	vector<Ship> shipList;
}ValidShips;

// Get all of the ports that need to be visited
vector<string> getRequiredPorts(vector<Customer>);
vector<Destination> groupDestinations(vector<Customer>, vector<Ship>, vector<string>);
bool custCmp(Customer, Customer);
vector<Customer> sortCust(vector<Customer>);
bool shipCmp(Ship, Ship );
vector<Ship> sortShip(vector<Ship> );
vector<Destination> sortDestinations(vector<Destination>);
vector<Ship> minShipsSort(vector<Customer>, vector<Ship>);
#endif