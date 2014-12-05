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
	
	

	cout << "Breakfast : \n";
	Iterator * Breakfast = pancake.createIterator();
	while (Breakfast->hasNext())
	{
		MenuItem*temp;
		temp = Breakfast->next();//iterator will step though menu
			temp->accept(MyPrinter);// visitor will interact  with MenuItem object
	}
	cout << endl << endl;
	
	cout << "Lunch : \n";
	Iterator* Lunch = diner.createIterator();
	while (Lunch->hasNext())
	{
		Lunch->next()->accept(MyPrinter);
	}
	cout << endl << endl;
	
}