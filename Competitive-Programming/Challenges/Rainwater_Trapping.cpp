//
// Created by kushashwa on 14/3/19.
//

// Sample Input:
// 10
// 0 2 1 3 0 1 2 1 2 1

// Sample Output:
// 5

#include <iostream>
#include <bits/stdc++.h> // for INT_MAX
using namespace std;

int main(int argc, char** argv) {
    int N;
    cout << "Number of roofs: ";
    cin >> N;

    cout << "Enter height of each roof: ";
    int roofs[N];
    for(int i=0; i<N; i++) {
        cin>>roofs[i];
    }

    // calculate leftmost and rightmost arrays
    int leftmost[N], rightmost[N];

    // create leftmost array
    int max = -INT_MAX;
    leftmost[0] = roofs[0];
    for(int i=1; i<N; i++) {
        if(roofs[i]>max) {
            max = roofs[i];
            leftmost[i] = max;
        } else {
            leftmost[i] = max;
        }
    }

    // create rightmost array
    max = -INT_MAX;
    rightmost[0] = roofs[0];
    for(int i=N-1; i>0; i--) {
        if(roofs[i]>max) {
            max = roofs[i];
            rightmost[i] = max;
        } else {
            rightmost[i] = max;
        }
    }

    // logic: sum(min(leftmost[i], rightmost[i]) - roofs[i])
    int result=0;
    for(int i=0; i<N; i++) {
        result += min(leftmost[i], rightmost[i]) - roofs[i];
    }

    cout << "Total units filled: " << result << endl;
}