/* Find number upto which there are n prime numbers. */
#include <iostream>
#include <vector>
using namespace std;
#define MAX 10000000
vector<bool>isPrime (MAX,true);
unsigned primearray[5761459];


void gen_primes(){
    isPrime[0]=isPrime[1]=false;
    for(unsigned i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(unsigned j=i;j*i<=MAX;j++) isPrime[i*j]=false;
        }
    }
    unsigned idx = 1;
    primearray[0]=2;

    for(int i=3;i<=MAX;i+=2){
        if(isPrime[i]){
            primearray[idx++]=i;
        }     
    }
}

int main(int argc, char const *argv[])
{

    gen_primes();

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<primearray[n-1]<<endl;
    }
    return 0;
}

// #include<iostream>
// #include<cmath>

// using namespace std;

// int is_prime(int start) {
//   // checks if number is prime or not
//   if(start <= 1) return -1;
//   if(start == 2 || start == 3) return 1;
//   if(start % 2 == 0 || start % 3 == 0) return -1;
  
//   for (int i=5; i*i<=start; i=i+6) {
//         if (start%i == 0 || start%(i+2) == 0) 
//           return -1; 
//   }
  
//   return 1;
// }
// long int process_input(int N) {
//   // cout << "is_prime(4)" << is_prime(4) << endl;
//   long int output;
//   int start = 2; // start counting from 2
//   int count = 0;
  
//   if(N == 1){
//     output = 2; return output;
//   }
  
//   while(count != N) {
//     if(start % 2 != 0 || start % 3 != 0) {
//       if(is_prime(start) == 1) count += 1;
//     }
//     // cout << "start: " << start << ", " << count << endl;
//     start += 1;
//   }
//   output = start-1;
//   return output;
// }
// int main() {
//   long int T;
//   cin >> T;
//   while(T-- != 0) {
//     int N, output;
//     cin >> N;
//     output = process_input(N);
//     cout << output << endl;
//   }
// 	return 0;
// }
