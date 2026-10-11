#include <iostream>
#include "searching_algorithm.h"
using namespace std;


SearchingAlgorithm::SearchingAlgorithm():
numberComparisons(0),
totalComparisons(0),
totalSearch(0),
averageComparisons(0)
{
}

/* 
// Fonction virtuelle pure = classe abstraite
int search(vector<int> v, int x);
*/

void SearchingAlgorithm::displaySearchResults(ostream& s, int results, int target) {
    ++totalSearch;

    averageComparisons = totalSearch > 0
        ? totalComparisons / totalSearch
        : 0;

    s << "Target = " << target << endl;

    s << "Result index = " << results << endl;

    s << "Comparisons in current search = " << numberComparisons << endl;

    s << "Total comparisons = " << totalComparisons << endl;
    
    s << "Average comparisons = " << averageComparisons << endl;
};
