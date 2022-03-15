#include "Store.h"


	//Get methods
string Store::getName() const
{
	return storeName;
}
/*Computer* Store::getArray() const

{
	return *(this->compArray[0]);
}
*/
int Store::getNumOfComputers() const
{
	return computersInStore;
}

	//Set methods
void Store::setName(const string& name)
{
	if (name.length() > 10)
	{
		cout << "Store's name length is too long" << endl;
		this->storeName = "~";
	}
	else 
	{
		this->storeName = name;
	}
}


	void Store::addComputer(const Computer& computer)
	{
		if (computersInStore >= 10)
		{
			cout << "The store is full!" << endl;
		}
		else
		{
			compArray[computersInStore++] = computer;
		}
	}
	void Store::printComputersByName()
	{
		int i, j; // used for sorting
		Computer temp;// temp computer for sorting
		cout << "There are " << this->computersInStore << " computers in the store. The computers:" << endl;
		Computer tempArray[MAX_COMPUTERS_NUMBER];

		for (i = 0; i < this->computersInStore; i++) // copy manufacturers names into temp string
		{
			tempArray[i] = compArray[i];
		}

		for (i = 1; i < this->computersInStore; i++) // insertion sort with strings
		{
			temp = tempArray[i];
			for (j = i; j > 0 && tempArray[j - 1].getManufacturer().compare(temp.getManufacturer()) > 0; j--)
			{
				tempArray[j] = tempArray[j - 1];
			}
			tempArray[j] = temp;
		}
		
		for (i = 0; i < this->computersInStore; i++)
		{
			cout << "Computer " << i + 1 << endl;
			tempArray[i].print();
			cout << endl;
		}
	}
			
	void Store::printComputersByYear()
	{
		int i, j; // used for sorting
		Computer temp;// temp computer for sorting
		cout << "There are " << this->computersInStore << " computers in the store. The computers:" << endl;
		Computer tempArray[MAX_COMPUTERS_NUMBER];

		for (i = 0; i < this->computersInStore; i++) // copy manufacturers names into temp string
		{
			tempArray[i] = compArray[i];
		}

		for (i = 1; i < this->computersInStore; i++) // insertion sort with integers
		{
			temp = tempArray[i];
			for(j=i;j > 0 && tempArray[j-1].getYear()>temp.getYear();j--)
			{
				tempArray[j] = tempArray[j - 1];
			}
			tempArray[j] = temp;
		}

		for (i = 0; i < this->computersInStore; i++)
		{
			cout << "Computer " << i + 1 << endl;
			tempArray[i].print();
			cout << endl;
		}
	}
	