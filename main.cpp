#include <iostream>
#include <vector>
#include <algorithm>
#include "day2_for_each.h"
#include "day2_for_each_n.h"
#include "day2_qsort.h"
#include "day2_bsearch.h"
#include "day3_count_and_count_if.h"
#include "day3_mismatch.h"
#include "day4_find_and_find_if_and_find_if_not.h"
#include "day4_find_end.h"
#include "day5_find_first_of.h"
#include "day5_adjacent_find.h"
#include "day6_search.h"
#include "day6_search_n.h"




using namespace std;


template<typename T>
void printData(const T &data);


int main() {
    demo_for_each::stl_for_each();
    demo_for_each_n::stl_for_each_n();
    demo_qsort::stl_qsort();
    demo_bsearch::stl_bsearch();
    demo_count_and_count_if::stl_count_and_count_if();
    demo_mismatch::stl_mismatch();
    demo_find_and_find_if_and_find_if_not::stl_find_and_find_if_and_find_if_not();
    demo_find_end::stl_find_end();
    demo_find_first_of::stl_find_first_of();
    demo_adjacent_find::std_adjacent_find();
    demo_search::stl_search();
    demo_search_n::stl_search_n();
    return 0;
}


template<typename T>
void printData(const T &data) {
    for_each(data.begin(), data.end(),[](auto const &a){ cout << a << " ";});
    cout << endl;


}

