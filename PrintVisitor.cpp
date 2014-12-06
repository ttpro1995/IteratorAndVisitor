//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#include "PrintVisitor.h"
#include <iostream>
using namespace std;


void PrintVisitor::visit(MenuItem& item)
{
	cout << item.getName() << "  " << item.getPrice() << "  \n";
	cout << item.getDescription() << endl;
}

