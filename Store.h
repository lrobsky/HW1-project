#pragma once
#define MAX_COMPUTERS_NUMBER 10
#include "Cpu.h"
#include "Computer.h"
class Store
{
	//Private members
	string storeName;
	Computer compArray[MAX_COMPUTERS_NUMBER];
	int computersInStore;

public:
	//Constructor
	Store(string strName = "~",int size = 0): storeName(strName), computersInStore(size)
	{
		if (strName.length() > 10)
		{
			cout << "Store's name length is too long" << endl;
			this->storeName = "~";
		}
		else
		{
			this->storeName = strName;
		}
	}

	//Get methods
	string getName() const;
	//Computer* getArray() const;
	int getNumOfComputers() const;

	//Set methods
	void setName(const string& name);


	void addComputer(const Computer& computer);
	void printComputersByName();
	void printComputersByYear();
};

