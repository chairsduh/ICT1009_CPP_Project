#ifndef HEAVY_H
#define HEAVY_H
#include <string>
#include "Basic.h"
using namespace std;

class Heavy : public Basic {
public:
	Heavy() :Basic() {};
	Heavy(string type, int amount, bool isSpecial, string specialProperties) : Basic(type, amount,
		isSpecial, specialProperties) { };
};
#endif // !HEAVY_H

