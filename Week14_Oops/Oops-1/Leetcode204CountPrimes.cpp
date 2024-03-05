#include<iostream>
#include<vector>
using namespace std;
void fillSieve(std::vector<bool> &sieve) {
        // Sieve of Eratosthenes algorithm
        int n = sieve.size() - 1;
        for (int i = 2; i * i <= n; i++) { // Corrected loop condition
            if (sieve[i]) { // Only proceed if i is marked as prime
                for (int j = i * i; j <= n; j += i) { // Corrected starting point
                    sieve[j] = false; // Mark multiples of i as non-prime
                }
            }
        }
    }
    int countPrimes(int n) {
        if (n <= 2) return 0;
        n = n - 1;
        int count = 0;
        std::vector<bool> sieve(n + 1, true); // 1 means prime, 0 means not prime
        fillSieve(sieve);
        sieve[0] = false;
        sieve[1] = false;
        for (int i = 2; i <= n; i++) {
            if (sieve[i]) count++;
        }
        return count;
    }
    int main (){
      int n = 100;
      cout<<countPrimes(n);  
    }
