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
    int linear_search(std::vector<int>arr, int num);
};

#endif