#include "date.h"
#include <fstream>
#include <iostream>

using namespace std;

struct Date date;

Date readDate(istream& in) {
	Date d1;
	in >> d1.year >> d1.month >> d1.day;
	return d1;
}

ostream& operator<<(ostream &out, Date &d1) {
	out << d1.year << "." << d1.month << "." << d1.day;
	return out;
}