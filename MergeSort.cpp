#include <iostream>
#include <vector>
#include <string>
#include "MergeSort.h"
using namespace std;

void merge(vector<License>& store, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<License> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = store[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = store[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i].platenumber <= R[j].platenumber) {
            store[k] = L[i];
            i++;
        } else {
            store[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        store[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        store[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<License>& store, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;
    mergeSort(store, left, mid);
    mergeSort(store, mid + 1, right);
    merge(store, left, mid, right);
}
