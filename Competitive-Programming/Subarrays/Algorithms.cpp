//
// Created by kushashwa on 7/3/19.
//

#include "Algorithms.h"
#include <iostream>

int Algorithms::linear_search(std::vector<int> arr, int num) {
    // create iterator
    std::vector<int>::iterator it;

    // iterate through the array
    for(it = arr.begin(); it != arr.end(); ++it) {
        if(*it == num) {
            return it - arr.begin();
        }
    }
    return -1;
}