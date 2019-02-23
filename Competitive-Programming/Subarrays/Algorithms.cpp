//
// Created by kushashwa on 7/3/19.
//

#include "Algorithms.h"
#include <iostream>

int main() {
    int N;
    std::cout << "Length of array: ";
    std::cin >> N;
    std::vector<int> arr = {};

    std::cout << "Now enter the elements of the array." << std::endl;
    for(int i=0; i<N; i++) {
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }

    Algorithms alg;
    int toFind;
    std::cout << "Value you want to search: ";
    std::cin >> toFind;
    int find = alg.linear_search(arr, toFind);
    find == -1 ? std::cout << "Not found" << std::endl : std::cout << "Found at: " << find << std::endl;
}
