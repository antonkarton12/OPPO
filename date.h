#pragma once
#include <iostream>
#include <fstream>

using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

Date readDate(istream& in);
void PrintDate(Date d1, ostream& out);

