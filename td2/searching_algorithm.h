#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H

#include <vector>

using namespace std;

class SearchingAlgorithm {
protected:
    int numberComparisons;
    int totalComparisons;
    int totalSearch;
    int averageComparisons;

public:
    SearchingAlgorithm();
    virtual ~SearchingAlgorithm() = default;

    virtual int search(vector<int>& v, int x) = 0;

    void displaySearchResults(ostream& s, int results, int target);
};

#endif