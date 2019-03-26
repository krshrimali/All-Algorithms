//
// Created by kushashwa on 26/3/19.
//

#include "example.h"

void execute_example_constructor() {
    Example_constructor eg1, eg2; // 2 Default Constructors called
    eg1 = eg2; // Copy Assignment Operator Called
    Example_constructor eg3 = eg1; // Copy Constructor Called
}