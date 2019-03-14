//
// Created by kushashwa on 14/3/19.
//

#ifndef PROJECT_READSTRING_H
#define PROJECT_READSTRING_H

#include <iostream>
using namespace std;

class Readstring {
private:
    int size_;
public:
    // explicit to avoid implicit conversions
    // Source: https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
    explicit Readstring(int streamsize=1000) {
        size_ = streamsize;
    }
    int returnSize() {
        return size_;
    }
    char* returnPara();
    char* returnLine();
    char* returnWord();
};


#endif //PROJECT_READSTRING_H