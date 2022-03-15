#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
class Cpu
{
	//private members
	double clockRate;
	string cpuManufacturer; // check with instructor if "using std::string" is allowed
	int yearOfManufacture;

public:
	
	//Constructor - should the implementation be in CPP or H file?
	Cpu(double clockRate=0.0,string cpuManufacturerName ="~",int yearOfManufacture =0): clockRate(clockRate), yearOfManufacture(yearOfManufacture)  // Where to put constructor?
	{
		if (cpuManufacturerName.length() > 10)
		{

			cout << "Manufacturer's name length is too long"  << endl;
			this->cpuManufacturer = "~";
		}
		else
		{
			this->cpuManufacturer = cpuManufacturerName;
		}
	}

	//Get methods
	double getClockRate() const;
	string getManufacturer() const;
	int getYear() const;

	//Set methods
	void setClockRate(const double clockRate);
	void setManufacturer(const string& name);
	void setYear(const int year);

	//print cpu details
	void print() const;

};
