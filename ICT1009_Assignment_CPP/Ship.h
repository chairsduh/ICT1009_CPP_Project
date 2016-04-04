#ifndef SHIP_H
#define SHIP_H
#include <string>
using namespace std;

class Ship {
	friend ostream& operator<<(ostream&, const Ship&);
private:
	//Variables for Ship Details
	string shipName, owner, company, country, port;
	double shipValue;
	int day, month, year;
	
	//Variables for Ship Container Info
	int maxLoad, basicLoad, heavyLoad, refrigeratedLoad, liquidLoad, specialLoad;
	double basicPrice, heavyPrice, refrigeratedPrice, liquidPrice, specialPrice;

	//For Task 3 - 5
	int currentMaxLoad = 0, currentBasicLoad = 0, currentHeavyLoad = 0, currentRefrigLoad = 0, currentLiquidLoad = 0;
	int currentSpecialTotal = 0;
	int currentSpecialBasic = 0;
	int currentSpecialHeavy = 0;
	int currentSpecialRefrig = 0;
	int currentSpecialLiquid = 0;
	double currentCost = 0;

	bool basicIsFull = false;
	bool heavyIsFull = false;
	bool refrigIsFull = false;
	bool liquidIsFull = false;
	bool specialIsFull = false;

public:
	//Constructors
	Ship();
	//Constructor with everything
	Ship(string, string, double, string, int, int, double, int, double, int, double, int, double, int, double, string, string, int, int, int);
	//Constructor without special and refrigerated
	Ship(string, string, double, string, int, int, double, int, double, int, double, string, string, int, int, int);

	//Getters & Setters
	string getShipName() const;
	void setShipName(string);
	string getOwner() const;
	void setOwner(string);
	double getShipValue() const;
	void setShipValue(double);
	string getCompany() const;
	void setCompany(string);
	string getCountry() const;
	void setCountry(string);
	string getPort() const;
	void setPort(string);
	int getDay();
	int getMonth();
	int getYear();

	int getMaxLoad() const;
	void setMaxLoad(int);
	int getBasicLoad() const;
	void setBasicLoad(int);
	int getHeavyLoad() const;
	void setHeavyLoad(int);
	int getLiquidLoad() const;
	void setLiquidLoad(int);
	int getRefrigeratedLoad() const;
	void setRefrigeratedLoad(int);
	int getSpecialLoad() const;
	void setSpecialLoad(int);

	double getBasicPrice() const;
	void setBasicPrice(double);
	double getHeavyPrice() const;
	void setHeavyPrice(double);
	double getLiquidPrice() const;
	void setLiquidPrice(double);
	double getRefrigeratedPrice() const;
	void setRefrigeratedePrice(double);
	double getSpecialPrice() const;
	void setSpecialPrice(double);

	double getCurrentCost() const;

	void setCurrentCost(double);

	int getCurrentBasicLoad() const;
	int setCurrentBasicLoad(int);
	int getCurrentHeavyLoad() const;
	int setCurrentHeavyLoad(int);
	int getCurrentRefrigLoad() const;
	int setCurrentRefrigLoad(int);
	int getCurrentLiquidLoad() const;
	int setCurrentLiquidLoad(int);

	int getCurrentSpecialTotal() const;
	int getCurrentSpecialBasic() const;
	int setCurrentSpecialBasic(int);
	int getCurrentSpecialHeavy() const;
	int setCurrentSpecialHeavy(int);
	int getCurrentSpecialLiquid() const;
	int setCurrentSpecialLiquid(int);
	int getCurrentSpecialRefrig() const;
	int setCurrentSpecialRefrig(int);

	bool getBasicIsFull() const;
	void setBasicIsFull(bool);
	bool getHeavyIsFull() const;
	void setHeavyIsFull(bool);
	bool getLiquidIsFull() const;
	void setLiquidIsFull(bool);
	bool getRefrigIsFull() const;
	void setRefrigIsFull(bool);
	bool getSpecialIsFull() const;
	void setSpecialIsFull(bool);

	//Methods
	//void updateShipDetails();
	//void updateShipContainerInfo();
	//int fill(int, int);
	void checkFull();
	bool isShipFull();
	string getDate();
	void setDate(int, int, int);
};
#endif // !SHIP_H


