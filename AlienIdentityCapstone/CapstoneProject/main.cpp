/*
Marco Seman
CIS 2252 (C++ Programming)
Fall 2015
Prof. John P. Baugh
*/

#include <iostream>
#include "Alien.h"

using namespace std;
int genderValue(char);


int main()
{
	Alien Alien1(100,356,'M');
	Alien Alien2(100,100, 'F');
	Alien Alien3;
	Alien Alien4;
	Alien Alien5;

	if(Alien1 == Alien2)
	{
		cout<<"Alien A is equal to Alien B"<<endl;
	}

	if (Alien1 != Alien2)
	{
		cout<<"Alien A is not equal to Alien B"<<endl;
	}
	
	if (Alien1 <= Alien2)
	{
		cout<<"Alien A is less than or equal to alien B"<<endl;
	}

	if (Alien1 < Alien2)
	{
		cout<<"Alien A is less than Alien A"<<endl;
	}

	if (Alien1 >= Alien2)
	{
		cout<<"Alien A is more than or equal to Alien B"<<endl;
	}

	if (Alien1 > Alien2)
	{
		cout<<"Alien A is greater than Alien B"<<endl;
	}

	system("PAUSE");

	return 0;
}