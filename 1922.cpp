// 1922. Count Good Numbers
#include <bits/stdc++.h>
using namespace std;

class Solution{
    bool isPrime(int num){
        if (num <= 1)
            return false;
        if (num == 2)
            return true;
        if (num % 2 == 0){
            return false;
        }

        int sqrtNum = static_cast<int>(sqrt(num));
        for( int i = 3; i <= sqrtNum; i += 2){
            if (num % i == 0){
                return false;
            }
        }

        return true;
    }
public:
    int countGoodNumbers(long long n){
        string s = to_string(n);
        
    }
};

int main(){

    return 0;
}