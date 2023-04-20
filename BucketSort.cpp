#include "BucketSort.h"

#include "bucket_sort.h"
#include <algorithm>

void BucketSorter::sort(std::vector<std::unique_ptr<Citation>> &plates, int num_buckets) {
    int n = arr.size();
    std::vector<std::vector<int>> buckets(num_buckets);

    int max_element = *std::max_element(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        int bucket_index = (num_buckets * arr[i]) / (max_element + 1);
        buckets[bucket_index].push_back(arr[i]);
    }

    for (int i = 0; i < num_buckets; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    int index = 0;
    for (int i = 0; i < num_buckets; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int BucketSorter::findNumBuckets(std::vector<std::unique_ptr<Citation>> &plates) {
    int n = arr.size();
    int max_element = *std::max_element(arr.begin(), arr.end());
    return std::max(1, n / (max_element + 1));
}
