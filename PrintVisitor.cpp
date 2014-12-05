//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#include "PrintVisitor.h"
#include <iostream>
using namespace std;

PrintVisitor::PrintVisitor()
{
}


PrintVisitor::~PrintVisitor()
{
}

void PrintVisitor::visit(MenuItem& item)
{
	cout << item.getName() << "  " << item.getPrice() << "  \n";
}