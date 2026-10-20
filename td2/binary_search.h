#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "searching_algorithm.h"

using namespace std;

class BinarySearch : public SearchingAlgorithm {
public:
    BinarySearch();
    virtual ~BinarySearch() override = default;

    int search(vector<int>& v, int x) override {
        numberComparisons = 0;
        vector<int> sorted = v;
        sort(sorted.begin(), sorted.end());

        int left = 0;
        int right = sorted.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            numberComparisons++;
            totalComparisons++;

            if (sorted[mid] == x) {
                return mid;
            }

            if (sorted[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

#endif