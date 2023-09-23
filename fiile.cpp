#include "date.h"
#include "fiile.h"
#include <iostream>
#include <fstream>

using namespace std;

struct fiile x;

fiile readFileData(istream& in) {
	fiile x;
	in >> x.name;
	x.d_create = readDate(in);
	in >> x.value;
	return x;
}

void printFileData(fiile x, ostream& out) {
	out << "Name of file: " << x.name << endl << "Date of creation: ";
	PrintDate(x.d_create, out);
	out << "\nFile value: " << x.value << " bytes\n";
}