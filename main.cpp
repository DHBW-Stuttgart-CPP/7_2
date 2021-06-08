#include <iostream>
#include <vector>
#include "Sorting.h"

template <typename Iterator>
void printContainer(Iterator begin_, Iterator const end_);

///////////////////main/////////////////////////////

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);

    std::vector<float> v ={6, 1, 7, 2, 5};
    printContainer(v.begin(), v.end());
    Sorting::bubblesort(v, v.begin(), v.end());
    printContainer(v.begin(), v.end());

    return RUN_ALL_TESTS();
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