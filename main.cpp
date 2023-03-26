#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Database.h"
#include "license.h"
#include "mergesort.h"
#include "bucketsort.h"
using namespace std;

int main() {

    Database database;
    database.readFromCsv("parking_citations.csv");

    cout << "License plate number of first plate: " << endl;
    cout << database.data.at(0)->plateNumber << endl;

    /*
	//mergesorts
	int size = plates.size();
	Merge sort;
	sort.mergesort(store, 0, size - 1);

	cout << "Enter License Plate: " << endl;
	cin >> search;
     */

	return 0;
}
