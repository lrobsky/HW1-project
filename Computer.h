#pragma once
#include "Cpu.h"
class Computer
{
	// Private members
	Cpu processor;
	string computerManufacturer;
	int yearOfManufacture;
	string computerColor;
	bool isLaptop;

public:	

	// Constructor
	Computer(Cpu cpu = (0, "~", 0), string manuName = "~", int yearOfManufacture = 0, string compColor = "~", bool isLaptop = false) :
		processor(cpu), yearOfManufacture(yearOfManufacture), isLaptop(isLaptop) 
	{
		if (manuName.length() > 10)
		{
			
			cout << "Manufacturer's name length is too long" << endl;
			this->computerManufacturer = "~";
		}
		else
		{
			this->computerManufacturer = manuName;
		}
		if (compColor.length() > 10)
		{

			cout << "Color string length is too long" << endl;
			this->computerColor = "~";
		}
		else
		{
			this->computerColor = compColor;
		}
		
	}

	// Get methods
	Cpu getCpu() const;
	string getManufacturer() const;
	int getYear() const;
	string getColor() const;
	bool getIsLaptop() const;

	// Set methods

	void setCpu(const Cpu& processor);
	void setManufacturer(const string& name);
	void setYear(const int year);
	void setColor(const string& color);
	void setIsLaptop(const bool isLaptop);

	// Print computer details
	void print() const;
};

