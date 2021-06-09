#include "gtest/gtest.h"
#include "../../Sorting.h"

////////////////Bubblesort/////////////////////

TEST(Bubblesort, IntSorting){
    std::vector<int> workingV ={6, 1, 7, 2, 5};
    std::vector<int> correctV ={1, 2, 5, 6, 7};
    Sorting::bubblesort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}

TEST(Bubblesort, DoubleSorting){
    std::vector<double> workingV = {6.1, 1.2, 7.3, 2.4, 5.5};
    std::vector<double> correctV = {1.2, 2.4, 5.5, 6.1, 7.3};
    Sorting::bubblesort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}

TEST(Bubblesort, FloatSorting){
    std::vector<float> workingV = {6.1, 1.2, 7.3, 2.4, 5.5};;
    std::vector<float> correctV = {1.2, 2.4, 5.5, 6.1, 7.3};
    Sorting::bubblesort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}

TEST(Bubblesort, CharSorting){
    std::vector<char> workingV = {'a', 'c', 'j', 'b', 'x'};;
    std::vector<char> correctV = {'a', 'b', 'c', 'j', 'x'};
    Sorting::bubblesort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}



////////////////Quicksort/////////////////////

TEST(Quicksort, IntSorting){
    std::vector<int> workingV ={6, 1, 7, 2, 5};
    std::vector<int> correctV ={1, 2, 5, 6, 7};
    Sorting::quicksort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}

TEST(Quicksort, DoubleSorting){
    std::vector<double> workingV = {6.1, 1.2, 7.3, 2.4, 5.5};
    std::vector<double> correctV = {1.2, 2.4, 5.5, 6.1, 7.3};
    Sorting::quicksort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}

TEST(Quicksort, FloatSorting){
    std::vector<float> workingV = {6.1, 1.2, 7.3, 2.4, 5.5};;
    std::vector<float> correctV = {1.2, 2.4, 5.5, 6.1, 7.3};
    Sorting::quicksort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}

TEST(Quicksort, CharSorting){
    std::vector<char> workingV = {'a', 'c', 'j', 'b', 'x'};;
    std::vector<char> correctV = {'a', 'b', 'c', 'j', 'x'};
    Sorting::quicksort(workingV.begin(), workingV.end());
    ASSERT_EQ(workingV,correctV);
}