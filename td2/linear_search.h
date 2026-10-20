#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <vector>
#include "searching_algorithm.h"

class LinearSearch : public SearchingAlgorithm {
public:
    LinearSearch() = default;
    virtual ~LinearSearch() override = default;

    int search(vector<int>& v, int x) override {
        numberComparisons = 0;
        for (size_t i = 0; i < v.size(); ++i) {
            numberComparisons++;
            totalComparisons++;
            if (v[i] == x) {
                return i;
            }
        }
        return -1;
    }
};

#endif