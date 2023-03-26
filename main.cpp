#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Database.h"
#include "MergeSort.h"
#include "BucketSort.h"
#include "SortTest.h"
using namespace std;

int main() {

    Database database;
    database.readFromCsv("parking_citations.csv");

    // NOTE: The parsed data is in vector form at database.data.
    // Access it by doing *(database.data.at(index))
    // If passing into a function, remember to pass by REFERENCE. Otherwise the code will be *very* slow.

    //cout << "Removing all but the first 10000 elements..." << endl;
    //database.data.erase(database.data.begin() + 10000, database.data.end());

    cout << "License plate number of first plate: " << endl;
    cout << database.data.at(0)->plateNumber << endl;
    cout << std::string(*(database.data.at(0)->dateTime)) << endl;

    //cout << "Now sorting data..." << endl;
    //SortTest::selectionSort(database.data);
    //cout << "Information about the first citation:" << endl;
    //cout << database.data.at(0)->plateNumber << endl;
    /cout << std::string(*(database.data.at(0)->dateTime)) << endl;

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
