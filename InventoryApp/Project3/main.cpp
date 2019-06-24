/*Marco Seman
CIS 2252 (C++ Programming)
Fall 2015
Prof. John Baugh
*/
#include "InventoryItem.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	InventoryItem a1("GummyBear", 5, 30.00, 80000);
	InventoryItem a2("RussianSinger", 2, 5, 10);

	InventoryItem();

	cout<<"The name of the item is: "<<a1.getName()<<endl;
	cout<<"Item number is: " <<a1.getItemNumber()<<endl;
	cout<<"The price of the product is: "<<a1.getPrice()<<endl;
	cout<<"The number in stock is: "<<a1.getUnitsInStock()<<endl;

	cout<<endl;

	cout<<"The name of the item is: "<<a2.getName()<<endl;
	cout<<"Item number is: " <<a2.getItemNumber()<<endl;
	cout<<"The price of the product is: "<<a2.getPrice()<<endl;
	cout<<"The number in stock is: "<<a2.getUnitsInStock()<<endl;

	system("PAUSE");
	return 0;
}