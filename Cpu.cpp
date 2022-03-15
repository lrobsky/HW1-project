#include "Cpu.h"
#include <iomanip>

double Cpu::getClockRate() const
{
	return this->clockRate;
}

string Cpu::getManufacturer() const
{
	return this->cpuManufacturer;
}

int Cpu::getYear() const
{
	return this->yearOfManufacture;
}

void Cpu::setClockRate(const double clockRate)
{
	this->clockRate = clockRate;
}

void Cpu::setManufacturer(const string& name)
{
	if (name.length() > 10)
	{
		cout << "Manufacturer's name length is too long" << endl;
		this->cpuManufacturer = '~';
	}
	else
	{
		this->cpuManufacturer = name;
	}
}

void Cpu::setYear(const int year)
{
	this->yearOfManufacture = year;
}
//Print cpu details
void Cpu::print() const
{
	cout << "Cpu clockRate: " << this->clockRate << endl;
	cout << "Cpu manufacturer: " << this->cpuManufacturer << endl;
	cout << "Cpu year: " << this->yearOfManufacture << endl;
}