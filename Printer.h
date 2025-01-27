#pragma once
#include <iostream>
#include <string>

using namespace std;

class Printer
{
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->availableCount = availableCount;
		this->printedCount = 0;
	}
	virtual void print(int pages) = 0;
	virtual void show() = 0;

};

