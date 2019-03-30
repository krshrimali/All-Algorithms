//
// Created by kushashwa on 30/3/19.
//

#ifndef PROJECT_EXAMPLE_H
#define PROJECT_EXAMPLE_H

// Non-static data members are initialized in the constructor using initializer list
struct Point {
    double X;
    double Y;

    Point(double const x = 0.0, double const y = 0.0): X(x), Y(y) {}
};
class Example {

};


#endif //PROJECT_EXAMPLE_H
