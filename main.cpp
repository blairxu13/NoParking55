#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Database.h"
#include "MergeSort.h"
#include "BucketSort.h"
using namespace std;

int main() {

    Database database;
    database.readFromCsv("parking_citations.csv");

    // NOTE: The parsed data is in vector form at database.data.
    // Access it by doing *(database.data.at(index))

    cout << "License plate number of first plate: " << endl;
    cout << database.data.at(0)->plateNumber << endl;
    //cout << std::string(*(database.data.at(0)->dateTime)) << endl;

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
