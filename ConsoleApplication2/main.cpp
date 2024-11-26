#include <iostream>
#include "PC.h"

using namespace std;

int main()
{
	PC obj("PC", "CPU", "GPU", "SSD", "RAM");
	obj.Print();
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	Office obj1("Offise", "CPU", "GPU", "SSD", "RAM", "Micro");
	obj1.Print();
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	Game obj2("Game", "CPU", "GPU", "SSD", "RAM", "Key", "Mouse");
	obj.Print();
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	Home obj3("Offise", "CPU", "GPU", "SSD", "RAM", "Web");
	obj3.Print();
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
}