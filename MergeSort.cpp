//
// Created by UFSpring2023 on 3/20/2023.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "MergeSort.h"
#include "License.h"
using namespace std;


/*
class MergeSort{
public:
	void mergesort(License plates, int left, int right);
private:
	void merge(License plates, int left, int mid, int right);
};

//class slides
void Merge::mergesort(License plates, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergesort(plates, left, mid);
		mergesort(plates, mid + 1, right);

		//merge the two subvectors
		merge(plates, left, mid, right);
	}
}

//class slides
void Merge::merge(License plates, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	vector<License> low;
	vector<License> high;

	for (int i = 0; i < n1; i++)
		low.at(i) = plates.at(left + i);
	for (int j = 0; j < n2; j++)
		high.at(j) = plates.at(mid + 1 + j);

	int i, j, k;
	i = 0;
	j = 0;
	k = left;

	while (i < n1 && j < n2) {
		if (low.at(i).at(0) <= high.at(j).at(0)) {
			plates.at(k) = low.at(i);
			i++;
		}
		else {
			plates.at(k) = high.at(j);
			j++;
		}
		k++;
	}
	while (i < n1) {
		plates.at(k) = low.at(i);
		i++;
		k++;
	}
	while (j < n2) {
		plates.at(k) = high.at(j);
		j++;
		k++;
	}

}
*/
