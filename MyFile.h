#pragma once
#include "date.h"
#include <iostream>
#include <fstream>


using namespace std;

struct MyFile {
	string name;
	Date d_create;
	int value;

};

istream& operator>>(istream& ist, MyFile& file);
ofstream& operator<<(ofstream& out, MyFile x);
