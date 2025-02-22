#pragma once
#include "Item.h"

class Weapon :
	public Item
{
public:
	Weapon(int damageMin = 0, int damageMax = 0,
		string name = "NONE", int level = 0, 
		int buyValue = 0, int sellValue = 0, 
		int rarity = 0);
	virtual ~Weapon();

	string toString();

	// Pure Virtual
	virtual Weapon* clone() const;
	
private:
	int damageMin;
	int damageMax;
};

