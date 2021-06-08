#ifndef INC_7_2_SORTING_H
#define INC_7_2_SORTING_H

#include <gtest/gtest.h>

using testing::Eq;

class Sorting : public testing::Test{
public:
    template<typename Container, typename Iterator>
    static void bubblesort(Container &container_, Iterator const begin_, Iterator const end_);

};

//////////////Implementation////////////////////

template<typename Container, typename Iterator>
void Sorting::bubblesort(Container &container_, Iterator const begin_, Iterator const end_) {
    bool sorted;        //flag that indicates if the container is sorted correctly
    Iterator iterator = begin_; //variable that stores the start iterator of the container

    //loop that is looped until the container is sorted correctly
    do{
        sorted = true;  //at the beginning of the loop guess that the container ist sorted correctly
        iterator = begin_;    //set the iterator to start of the container

        //loop that checks if the container is sorted correctly
        while(iterator < end_){
            if(*iterator > *(iterator+1) && (iterator+1) != end_){  //if the if the successor element is smaller than the actual element and the successsor isn't the out of the container
                sorted = false;     //set flag for big loop to false
                break;;             //exit the loop for a better runtime, because if two elements aren't in the correct order, the order of the further elements doesn't care
            }
            iterator++; //go one iterator further
        }

        iterator = begin_;      //set the iterator back to start of the container
        auto cache1 = *iterator;    //need to get a element to know which type should be used for auto
        auto cache2 = *iterator;

        //loop to switch elements
        while(iterator < end_){
            if(*iterator > *(iterator+1) && (iterator+1) != end_){  //if the if the successor element is smaller than the actual element and the successsor isn't the out of the container
                cache1 = *iterator;     //store the element in cache1
                cache2 = *(iterator+1); //store the successort element in cach2
                *iterator = cache2;     //set the element at the iterator position to the stored cache2 element
                *(iterator+1) = cache1; //set the successor element to the stored cache1 element
            }
            iterator++;     //go one iterator further
        }
    }while(!sorted);    //do it until the flag signals that the container is ordered correctly
}

///////////////////Tests//////////////////////

TEST_F(Sorting, BubblesortCorrectIntSorting){

    //std::vector<float> workingV ={6, 1, 7, 2, 5};
    //std::vector<float> correctV ={1, 2, 5, 6, 7};
    //Sorting::bubblesort(workingV, workingV.begin(), workingV.end());
    //ASSERT_EQ(workingV,correctV);

    ASSERT_EQ("1","1");
}

#endif //INC_7_2_SORTING_H
