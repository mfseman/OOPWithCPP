#include <iostream>
#include <fstream>
using namespace std;

bool isDangerous(int tempArray[]);
void readData(int tempArray[]);

int main()
{
	int myArray[10];

	readData(myArray);

	if(isDangerous(myArray))
	{
		cout<<"Run for your lives!"<<endl;
	}
	else
	{
		cout<<"Temp is safe."<<endl;
	}


	return 0;
}

bool isDangerous(int tempArray[])
{
	bool dangerStatus = false;
	double average = 0.0;
	double sum = 0.0;

	for(int i = 0; i < 10; i++)
	{
		sum += tempArray[i];
		//sum = sum + tempArray[i];
	}

	average = sum / 10.0;

	if(average > 100)
	{
		dangerStatus = true;
	}
	else
	{
		dangerStatus = false;
	}

	return dangerStatus;
}

void readData(int tempArray[])
{
	ifstream infile;
	int temp;

	infile.open("tempInput.txt");

	for(int i = 0; i < 10; i++)
	{
		infile >> tempArray[i];
	}//end while

	infile.close();
}
