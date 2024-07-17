#include <iostream>
#include <string>
#include "Printer.h"
#include "LaserPrinter.h"
#include "InkJetPrinter.h"

using namespace std;

int main() {

	InkJetPrinter* ink = new InkJetPrinter("Officejet v40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "Samsung", 3, 20);
	cout << "2 available Printers below" << endl;
	ink->show();
	laser->show();
	cout << endl;

	int choice, choice1;
	string reply = " ";

	for(;;)
	{
		cout << "Printer(1.Inkjet, 2.Laser) and how many pages you want? >> ";
		cin >> choice >> choice1;
		if (choice == 1)
		{
			ink->print(choice1);
			ink->show();
			laser->show();
		}
		else if (choice == 2)
		{
			laser->print(choice1);
			ink->show();
			laser->show();
		}
		cout << endl;
		cout << "You want to print more? (y/n) >> ";
		cin >> reply;

		if (reply != "y")
		{
			cout << "Exit.." << endl;
			return 0;
		}
	} 


	return 0;
}