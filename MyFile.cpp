#include "date.h"
#include "MyFile.h"
#include <iostream>
#include <fstream>

using namespace std;

istream& operator>>(istream& ist, MyFile& file) {
	ist >> file.name;
	file.d_create = readDate(ist);
	ist >> file.value;
	return ist;
}

ofstream& operator<<(ofstream& out, MyFile x) {
	out << "Name of file: " << x.name << endl << "Date of creation: " << x.d_create;
	out << "\nFile value: " << x.value << " bytes\n";
	return out;
}
