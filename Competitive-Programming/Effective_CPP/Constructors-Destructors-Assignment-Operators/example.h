//
// Created by kushashwa on 26/3/19.
//

#ifndef PROJECT_EXAMPLE_H
#define PROJECT_EXAMPLE_H

#include <iostream>

class Example_constructor {
public:
    /* @brief: Default Constructor
     * Params: None
     * Returns: None
     */
    Example_constructor() {
        std::cout << "Default Constructor Called" << std::endl;
    }

    /* @brief: Copy Constructor
     * Params: Object of type Example_constructor
     * Returns: None
     */
    Example_constructor(const Example_constructor& rhs) {
        std::cout << "Copy Constructor Called" << std::endl;
    }

    /* @brief: Copy Assignment Operator */
    Example_constructor& operator = (const Example_constructor &rhs) {
        std::cout << "Copy Assignment Operator Called" << std::endl;
    }
};

void execute_example_constructor();

#endif //PROJECT_EXAMPLE_H
