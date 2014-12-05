//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#pragma once
#include "Visitor.h"
#include "MenuItem.h"
class PrintVisitor :
	public Visitor
{
public:
	void visit(MenuItem&);

};

