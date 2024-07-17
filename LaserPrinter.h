#pragma once
#include "Printer.h"

class LaserPrinter : public Printer
{
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void print(int pages) {
		if (availableToner >= pages && availableCount >= pages)
		{
			printedCount = pages;
			cout << "-- " << pages << " Printed.. " << endl;
			availableToner -= pages;
			availableCount -= pages;
		}
		else
		{
			cout << "-- Short.." << endl;
		}
	}
	void show() {
		cout << "Laser : " << model << ", " << manufacturer << ", available count " << availableCount << ", available toner " << availableToner << endl;
	}
};

