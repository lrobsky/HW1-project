#include "Computer.h"
#include "Cpu.h"

// Get methods
Cpu Computer::getCpu() const
{
	return this->processor;
}
string Computer::getManufacturer() const
{
	return this->computerManufacturer;
}
int Computer::getYear() const
{
	return this->yearOfManufacture;
}
string Computer::getColor() const
{
	return this->computerColor;
}
bool Computer::getIsLaptop() const
{
	return this->isLaptop;
}

// Set methods

void Computer::setCpu(const Cpu& processor)
{
	this->processor = processor;
}
void Computer::setManufacturer(const string& name) // same code as in constructor - use inline?
{
	if (name.length() > 10)
	{
		cout << "Manufacturer's name length is too long" << endl;
		this->computerManufacturer = "~";
	}
	else
	{
		this->computerManufacturer = name;
	}
}
void Computer::setYear(const int year)
{
	this->yearOfManufacture = year;
}
void Computer::setColor(const string& color) // same code as in constructor - use inline?
{
	if (color.length() > 10)
	{
		cout << "Color string length is too long"  << endl;
		this->computerColor = "~";
	}
	else
	{
		this->computerColor = color;
	}
}
void Computer::setIsLaptop(const bool isLaptop)
{
	this->isLaptop = isLaptop;
}


// print computer details

void Computer::print() const
{
	string boolOutput; // swap with inline function  : return bool ? "True" : "False"   OR ostream& function!;
	if (this->isLaptop == 1)
	{
		boolOutput = "True";
	}
	else {
		boolOutput = "False";
	}
	this->processor.print(); // is this the orrect syntax?
	cout << "Computer manufacturer: " << this->computerManufacturer << endl;
	cout << "Computer year: " << this->yearOfManufacture << endl;
	cout << "Computer color: " << this->computerColor << endl;
	cout << "Computer is laptop: " << boolOutput << endl;
}
