#include <iostream>
#include <vector>
#include <fstream>
#include "date.h"
#include "MyFile.h"

void printMyFiles(vector<MyFile> &myfiles, ofstream &ost) {
	int n = 0;
	for (const auto& data : myfiles) {
		n++;
		ost << n << ") ";
		ost << data;

	}
}

void inputMyFiles(vector<MyFile> &myfiles, ifstream& ist) {
	MyFile a1;
	while (!ist.eof()) {
		ist >> a1;
		myfiles.push_back(a1);
	}
}

using namespace std;

int main() {
	vector<MyFile> files;
	ifstream in("input.txt");
	ofstream out("output.txt");
	MyFile a1;
	int n = 0;

	/*while (!in.eof()) {
		in >> a1;
		files.push_back(a1);
	}
	n = 0;
	*/
	inputMyFiles(files, in);
	printMyFiles(files, out);
	
	cout << "Files was accepted\n";
}