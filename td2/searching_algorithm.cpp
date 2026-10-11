#include <iostream>
#include "searching_algorithm.h"

SearchingAlgorithm::SearchingAlgorithm(): 
numberComparisons(0),
totalComparisons(0),
totalSearch(0),
averageComparisons(0)
{
}

void SearchingAlgorithm::displaySearchResults(std::ostream& s, int results, int target) {
    totalSearch++;

    averageComparisons = totalComparisons / totalSearch;

    s << "Target = " << target << std::endl;
    s << "Result index = " << results << std::endl;
    s << "Comparisons in current search = " << numberComparisons << std::endl;
    s << "Total comparisons = " << totalComparisons << std::endl;
    s << "Average comparisons = " << averageComparisons << std::endl;
}
