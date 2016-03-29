#ifndef CONTAINER_H
#define CONTAINER_H
#include <string>
using namespace std;

class Container {
private:
	string type;
	int amount;
	bool isSpecial;
	string specialProperties;
public:
	Container();
	Container(string, int, bool, string);
	string getType();
	int getAmount();
	bool getIsSpecial();
	string getSpecialProperties();
	void setType(string);
	void setAmount(int);
	void setIsSpecial(bool);
	void setSpecialProperties(string);
	bool updateContainer(string, int, bool, string);
};
#endif // !CONTAINER_H

