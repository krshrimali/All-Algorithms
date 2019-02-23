//
// Created by kushashwa on 7/3/19.
//

#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include <vector>
#include <iostream>

class Algorithms {
public:
    /*
     * @brief: does linear search
     * Parameters: arr ( to search from ): Type: vector<int>, num ( to search ): Type int
     * Returns: int (if index found: index else: -1)
     */
    int linear_search(std::vector<int> arr, int num) {
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
};

#endif