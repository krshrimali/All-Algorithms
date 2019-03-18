//
// Created by kushashwa on 18/3/19.
//

#include "example_templates.h"

int main() {
    // TODO: Warning here.
    int max = GetMax <int> (std::vector<int>{1, 2, 3, 4});
    std::cout << "Max is: " << max << std::endl;
}