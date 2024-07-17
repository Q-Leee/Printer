#pragma once
#include "Printer.h"

class InkJetPrinter : public Printer
{
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void print(int pages) {
		if (availableInk >= pages && availableCount >= pages)
		{
			printedCount = pages;
			cout << "-- " << pages << " Printed.. " << endl;
			availableInk -= pages;
			availableCount -= pages;
		}
		else
		{
			cout << "-- Short.." << endl;
		}
	}
	void show() {
		cout << "Ink Jet : " << model << ", " << manufacturer << ", available count " << availableCount << ", available ink " << availableInk << endl;
	}

};