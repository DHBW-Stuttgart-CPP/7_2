#include <iostream>
#include <vector>
#include "Sorting.h"

template <typename Iterator>
void printContainer(Iterator begin_, Iterator const end_);

///////////////////main/////////////////////////////

int main(int argc, char* argv[]) {

    std::cout << "Bubblesort:" << std::endl;
    std::vector<int> v ={6, 1, 7, 2, 5};
    //std::array<int, 5> v = {6, 1, 7, 2, 5};
    printContainer(v.begin(), v.end());
    Sorting::bubblesort(v.begin(), v.end());
    printContainer(v.begin(), v.end());

    std::cout << std::endl << "Quicksort:" << std::endl;
    std::vector<int> v2 ={6, 1, 5, 2, 5};
    printContainer(v2.begin(), v2.end());
    Sorting::quicksort(v2.begin(), v2.end());
    printContainer(v2.begin(), v2.end());


    return 0;
}

////////////////Implementation//////////////////////

template <typename Iterator>
void printContainer(Iterator begin_, Iterator const end_){
    std::cout << "Container: {";
    while(begin_ < end_){
        if(begin_ < (end_-1)){
            std::cout << *begin_ << ", ";   //print element
        } else{
            std::cout << *begin_;           //print last element
        }
        begin_++;       //go one element further
    }
    std::cout << "}" << std::endl;
}