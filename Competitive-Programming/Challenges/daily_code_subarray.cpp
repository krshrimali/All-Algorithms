//
// Created by kushashwa on 15/3/19.
//

#include <iostream>

using namespace std;

template<size_t SIZE, class T> inline size_t array_size(T (&arr)[SIZE]) {
    return SIZE;
}

// @brief: Calculate sum of lengths of contiguous subarrays having all elements distinct
// Input: n (denoting size of array followed by n integers)
// Output: answer mod (10^9 + 7)

void printVector(int* arr, int N) {
    int size = N;
//    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int solution(const int* arr, const int N) {
   // form contiguous subarrays
   const int size = N;
   auto subarrays = new int[4*4][4];
   cout << "Size: " << size << endl;
   for(int i=0; i<size; i++) {
        for(int j=i; j<size; j++) {
            subarrays[i][j] = arr[j];
        }
   }

   for(int i=0; i<size; i++) {
       printVector(subarrays[i], N);
   }
}

int main() {
    int N;
    cout << "Enter N ";
    cin >> N;
    cin.ignore(); // ignore \n after cin >> N

    auto arr = new int[N];

    for(int i=0; i<N; i++) {
        cin>>arr[i];
        cin.ignore(); // ignore \n after cin >> N
    }

    solution(arr, N);
}