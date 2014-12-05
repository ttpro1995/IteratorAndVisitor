//CS202 - Group 9 - APCS 13ctt Iterator and Visitor together
#pragma once
#include <string>
#include "Visitable.h"
using namespace std;
class MenuItem :public Visitable
{
private:
	string name;
		string description;
		bool vegetarian;
		double price;
public:
	MenuItem(string name,
		string description,
		bool vegetarian,
		double price);
	MenuItem();
	string getName();
	string getDescription();
	double getPrice();
	bool isVegetarian();
	void accept(Visitor&);

};

