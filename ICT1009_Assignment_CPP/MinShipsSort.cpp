#include "Basic.h"
#include "Container.h"
#include "Heavy.h"
#include "Liquid.h"
#include "Refrigerated.h"
#include "MinShipsSort.h"
#include <algorithm>
using namespace std;

// Get all of the ports that need to be visited
vector<string> getRequiredPorts(vector<Customer> custList)
{
	vector<string> requiredPorts;
	for (auto &i : custList)
	{
		if (find(requiredPorts.begin(), requiredPorts.end(), i.getPortName()) == requiredPorts.end())
		{
			requiredPorts.push_back(i.getPortName());
		}
	}
	return requiredPorts;
}

vector<Destination> groupDestinations(vector<Customer> custList, vector<Ship> shipList, vector<string> requiredPorts)
{
	vector<Destination> destinationList;
	for (auto &i : requiredPorts)
	{
		Destination tempDest;
		for (auto &j : custList)
		{
			if (j.getPortName() == i)
			{
				tempDest.custList.push_back(j);
			}
		}

		for (auto &j : shipList)
		{
			if (j.getPort() == i)
			{
				tempDest.shipList.push_back(j);
			}
		}
		destinationList.push_back(tempDest);
	}
	return destinationList;
}

bool custCmp(Customer c1, Customer c2)
{
	return (c1.getDate() < c2.getDate());
}

vector<Customer> sortCust(vector<Customer> custList)
{
	sort(custList.begin(), custList.end(), custCmp);
	return custList;
}

bool shipCmp(Ship s1, Ship s2)
{
	return (s1.getDate() < s2.getDate());
}

vector<Ship> sortShip(vector<Ship> shipList)
{
	sort(shipList.begin(), shipList.end(), shipCmp);
	return shipList;
}

vector<Destination> sortDestinations(vector<Destination> destinationList)
{
	for (auto &i : destinationList)
	{
		i.custList = sortCust(i.custList);
		i.shipList = sortShip(i.shipList);
	}
	return destinationList;
}

vector<Ship> minShipsSort(vector<Customer> custList, vector<Ship> shipList)
{
	// Sort customers and ships
	vector<string> requiredPorts = getRequiredPorts(custList);
	vector<Destination> destinationList = groupDestinations(custList, shipList, requiredPorts);
	destinationList = sortDestinations(destinationList);

	// Fill customers

	return shipList;
}