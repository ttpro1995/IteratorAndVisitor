//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#pragma once
class Visitor;
class Visitable
{
public:
	virtual void accept(Visitor&)=0;

};

