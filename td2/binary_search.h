#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "searching_algorithm.h"

class BinarySearch : public SearchingAlgorithm {
    public:
        BinarySearch();
        virtual ~BinarySearch() = default;

        int search(vector<int>& v, int x) override {
            sort(v.begin(), v.end());

            int l = 0;
            int r = v.size() - 1;
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (v[m] == x) {
                    return m;
                }

                if (v[m] < x) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
            return -1;
        }
};


#endif