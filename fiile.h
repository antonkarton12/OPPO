#pragma once
#include "date.h"
#include <iostream>
#include <fstream>

using namespace std;

struct fiile {
	string name;
	Date d_create;
	int value;

};

fiile readFileData(istream& in/*, ostream& out*/);
void printFileData(fiile x, ostream& out);