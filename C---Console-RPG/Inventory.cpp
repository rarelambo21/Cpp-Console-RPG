#include "Inventory.h"

Inventory::Inventory()
{
	this->capacity = 10;
	this->numOfItems = 0;
	this->itemArr = new Item * [capacity];
	this->initialize();
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->numOfItems; i++)
	{
		delete this->itemArr[i];
	}
	delete[] itemArr;
}

Inventory::Inventory(const Inventory& obj){
	this->capacity = obj.capacity;
	this->numOfItems = obj.numOfItems;
	this->itemArr = new Item * [this->capacity];

	for (size_t i = 0; i < this->numOfItems; i++)
	{
		this->itemArr[i] = obj.itemArr[i]->clone();
	}

	initialize(this->numOfItems);
}

Item& Inventory::operator[](const int index){
	if (index < 0 || index >= this->numOfItems)
		throw("BAD INDEX!");

	return *this->itemArr[index];
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
