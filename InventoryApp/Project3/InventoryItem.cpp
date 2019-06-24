/*Marco Seman
CIS 2252 (C++ Programming)
Fall 2015
Prof. John Baugh
*/


#include "InventoryItem.h"
#include <iostream>
#include <string>
using namespace std;


InventoryItem::InventoryItem() 
{
	name = "";
	itemNumber = -1;
	price = 0.0;
	unitsInStock = 0;
}

InventoryItem::InventoryItem(string n, int itemNum, double p, int
numUnits)
{
	name = n;
	itemNumber = itemNum;
	price = p;
	unitsInStock = numUnits;

}

string InventoryItem::getName()
{
	return name;
}
void InventoryItem::setName(string n) 
{
	this-> name = n;
}
int InventoryItem::getItemNumber()
{
	return itemNumber;
}
void InventoryItem::setItemNumber(int num)
{
	this -> itemNumber = num;
}
double InventoryItem::getPrice()
{
	return price;
}
void InventoryItem::setPrice(double p) 
{
	this -> price=p;
}
int InventoryItem::getUnitsInStock()
{
	return unitsInStock;
}
void InventoryItem::setUnitsInStock(int units)
{
	this ->unitsInStock = units;
}