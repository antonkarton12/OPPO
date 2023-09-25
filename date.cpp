#include "date.h"
#include <fstream>
#include <iostream>

using namespace std;

struct Date date;

Date readDate(istream& in) {
	Date d1;
	in >> d1.day >> d1.month >> d1.year;
	return d1;
}

ostream& operator<<(ostream &out, Date &d1) {
	out << d1.day << " " << d1.month << " " << d1.year;
	return out;
}