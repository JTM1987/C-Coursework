/* Jesse Martin
*  CS-210 Programming Languages
*  4-4 Assignment: Working With Files
*/


#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;
// Variable for the name of the output file
const char* OUTPUT_FILE = "CelsiusTemperature.txt";

struct fileI {
	string name = "";
	int temp = 0;
};


void convertTemp(vector<fileI>& a) {
	for (int i = 0; i < a.size(); i++) {
		a.at(i).temp = (a.at(i).temp - 32) * (5.0 / 9.0);
	}
}

bool validLocation(vector<fileI>& a) {
	ofstream file;
	file.open(OUTPUT_FILE);

	if (!file.is_open()) {
		return false;
	}

	for (int i = 0; i < a.size(); i++) {
		file << a.at(i).name << " " << a.at(i).temp << endl;
	}
	file.close();

	return true;
}

int main() {
	ifstream file;
	string fileName;
	fileI a;
	vector<fileI> locations;

	while (!file.is_open()) {
		cout << "Enter the file name\n";
		getline(cin, fileName);

		file.open(fileName);

		if (!file.is_open()) {
			cout << "Unable to open file, ensure you are entering a valid name.\n";
		}
	}

	while (!file.eof()) {
		file >> a.name;
		file >> a.temp;
		locations.push_back(a);
	}

	file.close();

	convertTemp(locations);

	if (!validLocation(locations)) {
		cout << "Could not open " << OUTPUT_FILE << ", please ensure you enter the correct file name.";
		return -1;
	}
	else {
		cout << "Temperatures output to " << OUTPUT_FILE << "\n";
		return 0;
	}
}