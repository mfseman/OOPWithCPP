/*Marco Seman
CIS 2252 (C++ Programming)
Fall 2015
Prof. John Baugh
*/

#ifndef InventoryItem_cpp
#define InventoryItem_H
#include <string> 
using namespace  std;

class InventoryItem
{
public:
	InventoryItem();
	InventoryItem(string n, int itemNum, double p, int numUnits);
	//member functions

	string getName();
	void setName(string n);
	int getItemNumber(); 
	void setItemNumber(int num);
	double getPrice();
	void setPrice(double p); 
	int getUnitsInStock();
	void setUnitsInStock(int units);

private:
	string name;
	int itemNumber;
	double price;
	int unitsInStock;
};
#endif