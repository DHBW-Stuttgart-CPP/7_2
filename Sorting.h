#ifndef INC_7_2_SORTING_H
#define INC_7_2_SORTING_H

#include <iostream>

class Sorting{
public:
    template<typename Iterator>
    static void bubblesort(Iterator const BEGIN, Iterator const END);

    template<typename Iterator>
    static void quicksort(Iterator const BEGIN, Iterator const END);

private:
    template<typename Iterator>
    static void swapTwoElements(Iterator a, Iterator b);

    template<typename Iterator>
    static Iterator splitUpContainer(Iterator const BEGIN, Iterator const END);

};

//////////////Implementation////////////////////

template<typename Iterator>
void Sorting::bubblesort(Iterator const BEGIN, Iterator const END) {
    bool sorted;        //flag that indicates if the container is sorted correctly
    Iterator iterator = BEGIN; //variable that stores the start iterator of the container

    //loop that is looped until the container is sorted correctly
    do{
        sorted = true;  //at the beginning of the loop guess that the container ist sorted correctly
        iterator = BEGIN;    //set the iterator to start of the container

        //loop that checks if the container is sorted correctly
        while(iterator < END){
            if(*iterator > *(iterator+1) && (iterator+1) != END){  //if the if the successor element is smaller than the actual element and the successsor isn't the out of the container
                sorted = false;     //set flag for big loop to false
                break;;             //exit the loop for a better runtime, because if two elements aren't in the correct order, the order of the further elements doesn't care
            }
            iterator++; //go one iterator further
        }

        iterator = BEGIN;      //set the iterator back to start of the container
        auto cache1 = *iterator;    //need to get a element to know which type should be used for auto
        auto cache2 = *iterator;

        //loop to switch elements
        while(iterator < END){
            if(*iterator > *(iterator+1) && (iterator+1) != END){  //if the if the successor element is smaller than the actual element and the successsor isn't the out of the container
                cache1 = *iterator;     //store the element in cache1
                cache2 = *(iterator+1); //store the successort element in cach2
                *iterator = cache2;     //set the element at the iterator position to the stored cache2 element
                *(iterator+1) = cache1; //set the successor element to the stored cache1 element
            }
            iterator++;     //go one iterator further
        }
    }while(!sorted);    //do it until the flag signals that the container is ordered correctly
}



template<typename Iterator>
void Sorting::quicksort(const Iterator BEGIN, const Iterator END) {
    if(BEGIN < END){
        Iterator const pivot = splitUpContainer(BEGIN, END-1);  //split up the container, by defining the last element as the pivot element an than place all smaller values in front of it and all bigger values behind it. At the End give back the position of the pivot element in the container

        quicksort(BEGIN, pivot-1);  //do recrusivly the same with the elements before the pivot element
        quicksort(pivot+1, END);    //and the same with the elements behind the pivot element
    }

}

//function that swap to Elements
template<typename Iterator>
void Sorting::swapTwoElements(Iterator a, Iterator b){
    auto cache = *a;    //store value of element a in cache
    *a = *b;            //set value of element b to value of element b
    *b = cache;         //set value of element 2 to value of cache
}

template<typename Iterator>
Iterator Sorting::splitUpContainer(const Iterator BEGIN, const Iterator END) {
    auto const pivot = *END;      //take the last element as the pivot element
    Iterator switchingIterator = BEGIN - 1; //this iterator stores the index of the last switched element

    for (Iterator iterator = BEGIN; iterator < END; iterator++){
        if(*iterator < pivot) {     //if the value of the iterator is smaller than the pivot value
            switchingIterator++;    //increase the iterator that indicates the last switched element
            swapTwoElements(switchingIterator, iterator);   //swap the last switched element with the element of the iterator
        }
    }
    swapTwoElements((switchingIterator + 1), END);  //swap the place of the pivot element (that is still the last element) and the lasted switched element
    return (switchingIterator + 1);     //return the position of the pivot element, which is behind the last switched element of the loop
}

#endif //INC_7_2_SORTING_H
