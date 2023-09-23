#include <iostream>
#include <vector>
#include <fstream>
#include "date.h"
#include "fiile.h"


using namespace std;

int main() {
	vector<MyFile> files;
	ifstream in("input.txt");
	ofstream out("output.txt");
	MyFile a1;
	int n = 0;

	while (!in.eof()) {
		in >> a1;
		files.push_back(a1);
	}
	n = 0;
	for (const auto& data : files) {
		n++;
		out << n << ") ";

		printFileData(data, out);
	}
	cout << "Files was accepted\n";
}