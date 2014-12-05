//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#pragma once
#include "Iterator.h"
class DinerMenuIterator :
	public Iterator
{
private:
	MenuItem* Item;
	int cur;//position maintains the current position of the	iteration over the array
	int max;
public:
	DinerMenuIterator(MenuItem *menuItem,int maxitem);

	bool hasNext();
	MenuItem* next();
};

