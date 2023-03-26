#ifndef NOPARKING_SORTTEST_H
#define NOPARKING_SORTTEST_H

#include <memory>
#include <string>
#include <vector>
#include "Citation.h"

/**
 * Some test sort algorithms...
 */
class SortTest {
public:
    static void selectionSort(std::vector<std::unique_ptr<Citation>> &citations);
};

#endif //NOPARKING_SORTTEST_H
