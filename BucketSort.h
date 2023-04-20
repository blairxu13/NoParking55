#ifndef NOPARKING_BUCKETSORT_H
#define NOPARKING_BUCKETSORT_H


#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Citation.h"

class BucketSorter {
public:
    BucketSorter() = default;
    void sort(std::vector<int>& arr, int num_buckets);
    int findNumBuckets(std::vector<int>& arr);
};


#endif //NOPARKING_BUCKETSORT_H
