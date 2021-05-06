#pragma once

#include "Armor.h"
#include "Weapon.h"

class Inventory
{
public:
	Inventory();
	virtual ~Inventory();
	Inventory(const Inventory &obj);
	inline int size()const { return this->numOfItems; }
	Item& operator[](const int index);
	void addItem(const Item &item);
	void removeItem(int index);

	inline void debugPrint() const
	{
		for (size_t i = 0; i < this->numOfItems; i++)
		{
			cout << this->itemArr[i]->debugPrint() << endl;
		}
	}

private:
	int capacity;
	int numOfItems;
	Item** itemArr;
	void expand();
	void initialize(const int from = 0);
};

