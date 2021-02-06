#include "Inventory.h"

Inventory::Inventory()
{
	capacity = 10;
	numOfItems = 0;
	itemArr = new Item * [capacity];
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->numOfItems; i++)
	{
		delete this->itemArr[i];
	}
	delete[] itemArr;
}

void Inventory::addItem(const Item& item)
{
	if (this->numOfItems >= this->capacity)
	{
		expand();
	}

	this->itemArr[this->numOfItems++] = item.clone();
}

void Inventory::removeItem(int index)
{
}

void Inventory::expand(){
	this->capacity *= 2;

	Item** tempArr = new Item * [this->capacity];

	for (size_t i = 0; i < this->numOfItems; i++)
	{
		tempArr[i] = this->itemArr[i];
	}

	delete[] this->itemArr;

	this->itemArr = tempArr;

	this->initialize(this->numOfItems);
}

void Inventory::initialize(const int from)
{
	for (size_t i = from; i < capacity; i++)
	{
		itemArr[i] = nullptr;
	}
}
