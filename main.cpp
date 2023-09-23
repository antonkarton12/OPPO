#include <iostream>
#include <vector>
#include <fstream>
#include "date.h"
#include "fiile.h"


using namespace std;



/*
struct Date {
	int day;
	int month;
	int year;
};
*/

/*Date readDate(istream& in) {
	Date d1;
	in >> d1.day >> d1.month >> d1.year;
	return d1;
}


void PrintDate(Date d1, ostream& out) {
	out << d1.day << " " << d1.month << " " << d1.year;
}



struct fiile {
	string name;
	Date d_create;
	int value;

};

fiile readFileData(istream& in, ostream& out) {
	fiile x;
	//out << "Input file name: ";
	in >> x.name;
	//out << "Input creation date (DD MM YYYY): ";
	x.d_create = readDate(in);
	//out << "Input file value (bytes): ";
	in >> x.value;
	return x;
}

void printFileData(fiile x, ostream& out) {
	out << "Name of file: " << x.name << endl << "Date of creation: ";
	PrintDate(x.d_create, out);
	out << "\nFile value: " << x.value << " bytes\n";
}
*/

int main() {
	vector<fiile> files;
	ifstream in("input.txt");
	ofstream out("output.txt");
	fiile a1;
	int n = 0;

	while (!in.eof()) {
		fiile a1 = readFileData(in);
		files.push_back(a1);
	}
	n = 0;
	for (const auto& data : files) {
		n++;
		out << n << ") ";

		printFileData(data, out);
	}
	cout << "Files was accepted\n";
	return 0;


}