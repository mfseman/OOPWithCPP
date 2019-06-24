#include <iostream>
#include <cmath>

using namespace std;


const double PI = 3.14159;

double calculateDistance(double x1, double y1, double x2, double y2);
double calculateRadius(double x1, double y1, double x2, double y2);
double calculateCircumference(double radius);
double calculateArea(double radius);

int main()
{
	
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	// Receiving input from user

	cout<<"Enter value for x1 : "<<endl;
	cin>>x1;
	
	cout<<"Enter value for x2 : "<<endl;
	cin>>x2;

	cout<<"Enter value for y1 : "<<endl;
	cin>>y1;

	cout<<"Enter value for y2 : "<<endl;
	cin>>y2;



	double radius = calculateRadius(x1, y1, x2, y2);


	cout<<"The Radius of the circle is :  "<< radius <<endl;
	cout<<"The Circumference of the circle is : "<<calculateCircumference(radius)<<endl;
	cout<<"The Area of the circle is : "<<calculateArea(radius)<<endl;

	return 0;
}

//function definitions
double calculateDistance(double x1, double y1, double x2, double y2)
{
	
	double result = 0.0;

	result = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

	return result;
}

double calculateRadius(double x1, double y1, double x2, double y2)
{
	double result = 0.0;

	result =  calculateDistance(x1, y1, x2, y2);

	return result;
}

double calculateCircumference(double radius)
{
	double result = 0.0;

	result = radius * PI * 2;

	return result;
}

double calculateArea(double radius)
{
	double result = 0.0;

	result = pow(PI * radius, 2);

	return result;
}	
