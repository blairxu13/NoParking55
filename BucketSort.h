#ifndef NOPARKING_BUCKETSORT_H
#define NOPARKING_BUCKETSORT_H


#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Citation.h"


class BucketSort {
public:
    static void sort(std::vector<std::unique_ptr<Citation>> &plates, int num_buckets);
};

#endif
