#include "Basic.h"
#include "Container.h"
#include "Heavy.h"
#include "Liquid.h"
#include "Refrigerated.h"
#include "MinShipsSort.h"
#include <algorithm>
#include <iostream>
using namespace std;

vector<ValidShips> sortShips(vector<Customer> custList, vector<Ship> &shipList)
{
	vector<ValidShips> validShipsList;
	for (auto &i : custList)
	{
		ValidShips temp;
		temp.cust = i;
		for (auto &j : shipList)
		{
			if (i.getPortName() == j.getPort() && i.getDate() >= j.getDate())
			{
				temp.shipList.push_back(&j);
			}
		}
		if (temp.shipList.size() == 0)
		{
			cout << "No ships for " << i.getName() << endl;
		}
		else
		{
			validShipsList.push_back(temp);
		}
	}
	return validShipsList;
}

bool custCmp(ValidShips v1, ValidShips v2)
{
	return (v1.cust.getDate() < v2.cust.getDate());
}

vector<ValidShips> sortCustByDate(vector<ValidShips> validShipsList)
{
	sort(validShipsList.begin(), validShipsList.end(), custCmp);
	return validShipsList;
}

bool shipCmp(Ship *s1, Ship *s2)
{
	return (s1->getMaxLoad() > s2->getMaxLoad());
}

vector<ValidShips> sortShipsByCapacity(vector<ValidShips> validShipsList)
{
	for (auto &i : validShipsList)
	{
		sort(i.shipList.begin(), i.shipList.end(), shipCmp);
	}
	return validShipsList;
}

vector<Ship> minShipsSort(vector<Customer> custList, vector<Ship> shipList)
{
	// Map each customer to a vector of valid ships
	vector<ValidShips> validShipsList = sortShips(custList, shipList);
	
	// Sort customers by date (earliest date first), sort valid ships by capacity (largest max capacity first)
	validShipsList = sortCustByDate(validShipsList);
	validShipsList = sortShipsByCapacity(validShipsList);
	// Fill customers
	shipList = fillFun(validShipsList);

	return shipList;
}

vector<Ship> fillFun(vector<ValidShips> input) 
{
	vector<Ship> temp;

	//Refrig Special Loop
	for (auto &i : input) {
		cout << i.cust.getName() << ": ";
		for (auto &j : i.cust.getContainerArray()) {
			if (j->getType() == "refrig" && j->getIsSpecial() == true) {
				int amount = j->getAmount;
				for (auto &k : i.shipList) {
					//cout << k.getShipName() << " ";
					k->setCurrentSpecialRefrig;
				}
				cout << endl;

				break;
			}
		}
	}

	return temp;
}