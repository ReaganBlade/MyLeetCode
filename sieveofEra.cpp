// c++ program to find the prime numbers within a range using sieve of erathosthenes
#include <bits/stdc++.h>
using namespace std;

int eras(int n){
    vector<int> prime = {n+1, 1};
    prime[0] = 0, prime[1] = 0;
    for (int i = 2; i < n + 1; i++){
        if (prime[i] == 1){
            for (int j = 2 * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){

    return 0;
}