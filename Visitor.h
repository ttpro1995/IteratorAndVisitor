//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#pragma once
#include "Visitable.h"
class MenuItem;
class Visitor
{
public:
	virtual void visit(MenuItem&)=0;
	Visitor();
	~Visitor();
};

