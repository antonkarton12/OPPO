#include "date.h"
#include "fiile.h"
#include <iostream>
#include <fstream>

using namespace std;

istream& operator>>(istream& ist, MyFile& file) {
	ist >> file.name;
	file.d_create = readDate(ist);
	ist >> file.value;
	return ist;
}

void printFileData(MyFile x, ostream& out) {
	out << "Name of file: " << x.name << endl << "Date of creation: ";
	PrintDate(x.d_create, out);
	out << "\nFile value: " << x.value << " bytes\n";
}