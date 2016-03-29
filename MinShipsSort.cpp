#include "Basic.h"
#include "Container.h"
#include "Customer.h"
#include "Heavy.h"
#include "Liquid.h"
#include "Refrigerated.h"
#include "Ship.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef struct DestinationType
{
	vector<Customer> custList;
	vector<Ship> shipList;
}Destination;

// Get all of the ports that need to be visited
vector<string> getRequiredPorts(vector<Customer> custList)
{
	vector<string> requiredPorts;
	for (auto &i : custList)
	{
		if (find(requiredPorts.begin(), requiredPorts.end(), i.getPortName()) != requiredPorts.end())
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

int main()
{
	// Function parameters
	vector<Customer> custList;
	vector<Ship> shipList;
	vector<string> requiredPorts = getRequiredPorts(custList);
	vector<Destination> destinationList = groupDestinations(custList, shipList, requiredPorts);
}

/*
group customers according to destination
reject custopmers with a destination that doesnt exit
within each group, reject customers that have a due date that cannot be met by any ship going to that destination
Order ships and customers according to their due date [earliest]
fill in said order


*/