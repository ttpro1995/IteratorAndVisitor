#pragma once
//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#include "MenuItem.h"
#include "DinerMenuIterator.h"
#include <string>
using namespace std;
class DinerMenu
{
private:
	int MAX_ITEMS=6;
	int  numberOfItems = 0;
	MenuItem* menu;
public:
	DinerMenu();
	DinerMenu(const DinerMenu&);
	DinerMenu& operator=(const DinerMenu&);
	~DinerMenu();
	void addItem(string name, string description, bool vegetarian, double price);
	//MenuItem* getMenuItem();  not need this because we use Iterator
	Iterator* createIterator();
};

