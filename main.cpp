#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <"license.h">
#include <"mergesort.h">
#include <"bucketsort.h">
using namespace std;

int main() {
    vector<License> totaldata;
	vector<string> plates;
	string search;

	ifstream license;
	license.open("parking_citations.csv");
	string data;
	getline(license, data);
	while (getline(license, data, ',')) {
		string platenumber = data;
		(getline(license, data, ','));
		string state = data;
		(getline(license, data, ','));
		string make = data;
		(getline(license, data, ','));
		string style = data;
		(getline(license, data, ','));
		string color = data;
		(getline(license, data, ','));
		string location = data;
		(getline(license, data, ','));
		string violation = data;
		(getline(license, data, ','));
		string fine = data;
		(getline(license, data, ','));
		string year = data;
		(getline(license, data, ','));
		string month = data;
		(getline(license, data, ','));
		string day = data;
		(getline(license, data, ','));
		string hour = data;
		(getline(license, data, '\n'));
		string minute = data;

		License store(platenumber, state, location, make, style, color, violation, fine, year, month, day, hour, minute);


		totaldata.push_back(store);
		plates.push_back(platenumber);
	}

	//mergesorts
	int size = plates.size();
	Merge sort;
	sort.mergesort(plates, 0, size - 1);

	cout << "Enter License Plate: " << endl;
	cin >> search;

	return 0;
}
