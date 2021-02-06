#pragma once

#include "Inventory.h"


class Character
{
public:
	Character();
	virtual ~Character();

	// Functions
	void initialize(const string name);
	void printStats() const;
	void levelUp();
	string getAsString()const;
	
	// Accessors 
	inline const double& getX() const { return this-> xPos; }
	inline const double& getY() const { return this-> yPos; }

	inline const double& getStrength() const { return this->strength; }
	inline const double& getVitality() const { return this->vitality; }
	inline const double& getDexterity() const { return this->dexterity; }
	inline const double& getIntelligence() const { return this->intelligence; }

	inline const string& GetName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }

	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getStaminaMax() const { return this->staminaMax; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefence() const { return this->defence; }
	inline const int& getMagicFind() const { return this->luck; }

	// Modifiers 

private:
	double xPos;
	double yPos;

	Inventory inventory;
	Weapon weapon;
	Armor armor;

	string name;
	int level;
	int exp;
	int expNext;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defence;
	int luck;


	int statPoints;
	int skillPoints;
};

