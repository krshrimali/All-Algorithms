/* Naive Method for building Suffix Array
 * Reference: README.md [References - 1]
 */

#include <iostream>
#include <string.h>
#include <vector>
#include <cstring>
using namespace std;

// appends character to a string
char* appendChar(char* array, char a) {
  size_t len = strlen(array);
  char* ret = new char[len + 2];
  strcpy(ret, array);
  ret[len] = a;
  ret[len+1] = '\0';
  return ret;
}

// make array of all suffixes
vector<char*> makeArray(char* s) {
  // input string s 
  // outputs array of all suffixes possible
  cout << "Making suffix for: " << s << endl;
  vector<char*> suffi; // empty list
  
  // append suffixes to suffi list  
  for(int i = 0; i < int(strlen(s)); i++) { 
    // make empty string for each suffix
    char* sub = "";
    for(int j = i; j < int(strlen(s)); j++) {
      sub = appendChar(sub, s[j]); // append char to char* (string)
    }
    suffi.push_back(sub); 
  }
  // return array of all suffixes
  return suffi; 
}

// sort the array of all suffixes
int main() {
  // char* s; -- error, TO DO
  cout << "String: " << endl;
  char* s = "Kushashwa";
  cout << "Output: " << endl;
  
  // make array for suffixes
  vector<char*> output = makeArray(s);
  
  // iterate through the vector and print
  for(auto i = output.begin(); i != output.end(); i++) {
    cout << *i << endl;
  }
}
