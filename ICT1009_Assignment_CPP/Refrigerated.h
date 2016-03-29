#ifndef REFRIGERATED_H
#define REFRIGERATED_H
#include <string>
#include "Heavy.h"
using namespace std;

class Refrigerated : public Heavy {
public:
	Refrigerated() :Basic() {};
	Refrigerated(string type, int amount, bool isSpecial, string specialProperties) : Basic(type, amount,
		isSpecial, specialProperties) {};
};
#endif // !REFRIGERATED_H

