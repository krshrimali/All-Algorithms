//
// Created by kushashwa on 14/3/19.
//

#include "Readstring.h"

char* Readstring::returnPara() {
    auto arr = new char(Readstring::returnSize()); // use of auto avoids duplicating the type name
    cin.getline(arr, Readstring::returnSize(), '.');
    return arr;
}

char* Readstring::returnLine() {
    auto arr = new char(Readstring::returnSize()); // use of auto avoids duplicating the type name
    cin.getline(arr, Readstring::returnSize()); // default is '\n'
    return arr;
}

char* Readstring::returnWord() {
    auto arr = new char(Readstring::returnSize()); // use of auto avoids duplicating the type name
    cin >> arr;
    return arr;
}

string Readstring_c::returnString() {
    string s;
    getline(cin, s);
    return s;
}