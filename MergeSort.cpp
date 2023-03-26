#include "MergeSort.h"

using namespace std;

// This code doesn't seem to work, so I commented it out to be able to test it.
// If you want to access a license plate string from the vector, do plates.at(0)->plateNumber

/*
//class slides
void MergeSort::mergesort(std::vector<std::unique_ptr<Citation>> &plates, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergesort(plates, left, mid);
		mergesort(plates, mid + 1, right);

		//merge the two subvectors
		merge(plates, left, mid, right);
	}
}

//class slides
void MergeSort::merge(std::vector<std::unique_ptr<Citation>> &plates, int left, int mid, int right) {
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