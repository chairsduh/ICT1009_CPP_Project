#ifndef LIQUID_H
#define LIQUID_H
#include <string>
#include "Basic.h"
using namespace std;

class Liquid : public Basic {
public:
	Liquid() :Basic() {};
	Liquid(string type, int amount, bool isSpecial, string specialProperties) :Basic(type, amount,
		isSpecial, specialProperties) { };
};
#endif // !LIQUID_H
