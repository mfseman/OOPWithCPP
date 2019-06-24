/*
Marco Seman
CIS 2252 (C++ Programming)
Fall 2015
Prof. John P. Baugh
*/


#ifndef ALIEN_H
#define ALIEN_H
class Alien
{
	public:
		Alien(); //default values:
		//height = 60, weight = 100, gender = 'M'
		Alien(int h, int w, char g); //set height to h,
		//and weight to w, and gender to g
		void setHeight(int h); //set height to h
		void setWeight(int w); //set weight to w
		void setGender(char g); //sets the gender to g
		int getHeight(); //return the height
		int getWeight(); //return the weight
		char getGender(); //return the gender
		//operators: compare the aliens
		bool operator==(const Alien& alien) const;
		bool operator!=(const Alien& alien) const;
		bool operator<=(const Alien& alien) const;
		bool operator<(const Alien& alien) const;
		bool operator>=(const Alien& alien) const;
		bool operator>(const Alien& alien) const;
	private:
		int height; //inches
		int weight; //pounds
		char gender; //the gender. Either 'M' or 'F'
};
#endif