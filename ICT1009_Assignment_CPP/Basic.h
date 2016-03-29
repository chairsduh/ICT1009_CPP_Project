#ifndef BASIC_H
#define BASIC_H
#include <string>
#include "Container.h"
using namespace std;

class Basic : public Container {
public:
	Basic() : Container() {};
	Basic(string type, int amount, bool isSpecial, string specialProperties) : Container(type, amount, isSpecial,
		specialProperties) { };
};
#endif // !BASIC_H

