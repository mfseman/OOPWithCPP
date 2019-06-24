/*
Marco Seman
CIS 2252 (C++ Programming)
Fall 2015
Prof. John P. Baugh
*/

#include "Alien.h"
#include <iostream>
using namespace std;

Alien::Alien()
{
	height = 60;
	weight = 100;
	gender = 'M';
}

Alien::Alien(int h, int w, char g)
{
	height = h;
	weight = w;
	gender = g;
}

void Alien::setHeight(int h)
{
	if(height >= 0)
	{
		height = h;
	}
	else
	{
		cout<<"Please enter a valid number"<<endl;
	}
}

void Alien::setWeight(int w)
{
	if(weight >= 0)
	{
		weight = w;
	}
	else
	{
		cout<<"Please enter a valid number"<<endl;
	}
}

void Alien::setGender(char g)
{
	this -> gender = g;
}

int Alien:: getHeight()
{
	return height;
}

int Alien:: getWeight()
{
	return weight;
}

char Alien::getGender()
{
	return gender;
}

int genderValue(char c)
{
     if(c == 'M')
	 {
	     return 2;
	 }
	 else if(c == 'F')
	 {
	     return 3;
     }
}

bool Alien::operator== (const Alien& alien) const
{
	   int myStatusPoints = weight * height * genderValue(gender);
	   int otherAlienStatusPoints = alien.weight * alien.height * genderValue(alien.gender);
	   
	   return (myStatusPoints == otherAlienStatusPoints);
}


bool Alien::operator!= (const Alien& alien) const
{
	   int myStatusPoints = weight * height * genderValue(gender);
	   int otherAlienStatusPoints = alien.weight * alien.height * genderValue(alien.gender);
	   
	   return (myStatusPoints != otherAlienStatusPoints);
}

bool Alien::operator<= (const Alien& alien) const
{
	   int myStatusPoints = weight * height * genderValue(gender);
	   int otherAlienStatusPoints = alien.weight * alien.height * genderValue(alien.gender);
	   
	   return (myStatusPoints <= otherAlienStatusPoints);
}

bool Alien::operator< (const Alien& alien) const
{
	   int myStatusPoints = weight * height * genderValue(gender);
	   int otherAlienStatusPoints = alien.weight * alien.height * genderValue(alien.gender);
	   
	   return (myStatusPoints < otherAlienStatusPoints);
}
bool Alien::operator>= (const Alien& alien) const
{
	   int myStatusPoints = weight * height * genderValue(gender);
	   int otherAlienStatusPoints = alien.weight * alien.height * genderValue(alien.gender);
	   
	   return (myStatusPoints >= otherAlienStatusPoints);
}
bool Alien::operator> (const Alien& alien) const
{
	   int myStatusPoints = weight * height * genderValue(gender);
	   int otherAlienStatusPoints = alien.weight * alien.height * genderValue(alien.gender);
	   
	   return (myStatusPoints > otherAlienStatusPoints);
}