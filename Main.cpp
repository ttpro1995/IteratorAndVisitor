//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#include <iostream>
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "PrintVisitor.h"
#include "PancakeIterator.h"
#include "DinerMenuIterator.h"
using namespace std;

int main()
{
	DinerMenu diner;
	PancakeHouseMenu pancake;
	PrintVisitor MyPrinter;
	Iterator * Breakfast = pancake.createIterator();
	Iterator* Lunch = diner.createIterator();

	cout << "Breakfast : \n";
	while (Breakfast->hasNext())
	{
		Breakfast->next()->accept(MyPrinter);
	}
	cout << endl << endl;
	
	cout << "Lunch : \n";
	while (Lunch->hasNext())
	{
		Lunch->next()->accept(MyPrinter);
	}
	cout << endl << endl;
	
}