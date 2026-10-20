#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include <algorithm>
#include <cmath>
#include <vector>

#include "searching_algorithm.h"

using namespace std;

class JumpSearch : public SearchingAlgorithm {
public:
    JumpSearch();
    virtual ~JumpSearch() override = default;

    int search(vector<int>& v, int x) override {
        numberComparisons = 0;
        vector<int> sorted = v;
        sort(sorted.begin(), sorted.end());

        int n = sorted.size();
        
        int step = sqrt(n);
        int prev = 0;
        int res = step;

        while (prev < n) {
            int last = res;
            numberComparisons++;
            totalComparisons++;

            if (last > n) last = n;

            if (sorted[last - 1] >= x) break;

            prev = res;
            res += step;

            if (prev >= n) return -1;
        }

        if (res > n) {
            res = n;
        }

        for (int i = prev; i < res; ++i) {
            numberComparisons++;
            totalComparisons++;
            if (sorted[i] == x) return i;
            if (sorted[i] > x) return -1;
        }

        return -1;
    }
};

#endif