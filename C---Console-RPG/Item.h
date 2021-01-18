#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class Item
{
public:
	Item();
	virtual ~Item();

	inline string debugPrint() const { return this->name; }

private:
	string name;
	int buyValue;
	int sellValue;
};

