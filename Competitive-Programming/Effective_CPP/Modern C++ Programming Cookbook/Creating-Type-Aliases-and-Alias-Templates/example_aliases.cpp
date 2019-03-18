//
// Created by kushashwa on 18/3/19.
//

#include <iostream>

using byte = unsigned char;
using pbyte = unsigned char*;
using array_t = int[10];
using fn = std::string(byte, double); // void(char, double)

/* @brief: takes a char value and a double value. Returns char value repeated double-value times.
 * Parameters: byte: b (character), double: d (repeating count)
 * Returns: byte: b, byte b repeated d times.
 */
std::string func(byte b, double d) {
    // char is b
    // return double-times char
    return std::string(d, b);
}

int main() {
    byte b{'a'};
    pbyte pb = new byte[10]{0};
    array_t a{0,1,2,3,4,5,6,7,8,9};
    double d = 10.0;

    fn* f = func;
    std::cout << "Byte: " << b << std::endl;
    std::string result = f(b, d);
    std::cout << "Byte: " << result << std::endl;
}