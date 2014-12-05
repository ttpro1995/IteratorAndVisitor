#include "MenuItem.h"
#include "Visitor.h"
//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together

MenuItem::MenuItem()
{
	//do nothing
}

MenuItem::MenuItem(string name,
	string description,
	bool vegetarian,
	double price)
{
	this->name = name;
	this->description = description;
	this->vegetarian = vegetarian;
	this->price = price;
}


string MenuItem::getName() {
	return name;
}
string MenuItem::getDescription() {
	return description;
}
double MenuItem::getPrice() {
	return price;
}
bool MenuItem::isVegetarian() {
	return vegetarian;
}


void MenuItem::accept(Visitor& v)
{

	v.visit(*this);
}