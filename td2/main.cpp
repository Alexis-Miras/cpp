#include <iostream>
#include <vector>

#include "binary_search.h"
#include "jump_search.h"
#include "linear_search.h"
#include <algorithm>

using namespace std;

int main() {
    vector<int> values = {9, 4, 7, 1, 3, 8, 2, 5, 6};

    BinarySearch binarySearch;
    JumpSearch jumpSearch;
    LinearSearch linearSearch;

    const int target = 7;

    int binary_result = binarySearch.search(values, target);
    int linear_result = linearSearch.search(values, target);
    int jump_result = jumpSearch.search(values, target);
    cout << "Binary search index: " << binary_result << endl;
    binarySearch.displaySearchResults(cout, binary_result, 7);
    cout << "Jump search index: " << jump_result << endl;
    jumpSearch.displaySearchResults(cout, jump_result, 7);
    cout << "Linear search index: " << linear_result << endl;
    linearSearch.displaySearchResults(cout, linear_result, 7);

    return 0;
}