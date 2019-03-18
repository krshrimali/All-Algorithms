//
// Created by kushashwa on 18/3/19.
//

#ifndef PROJECT_EXAMPLE_TEMPLATES_H
#define PROJECT_EXAMPLE_TEMPLATES_H

#include <iostream>
#include <vector>
#include <iterator>

/* @brief: Template function that returns greater of the list
 * Parameters: std::vector<int>
 * Returns: Greatest of the vector. (int)
 */
template <class myType>
myType GetMax(std::vector<int> input) {
    // TODO: Check if input.size() is 0
    // TODO: return type as auto?
    int max = -100000;

    // iterate
    // std::vector<int>::iterator ptr = input.begin()
    // suggested auto for readability
    for(auto ptr = input.begin(); ptr < input.end(); ptr++) {
        if(*ptr > max) max = *ptr;
    }

    return max;
}

//class Example_templates {
//
//};


#endif //PROJECT_EXAMPLE_TEMPLATES_H
