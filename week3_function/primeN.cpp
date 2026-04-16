#include <iostream>
using namespace std;

// Function to check if a single number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) { // Optimized: i * i <= num is same as i <= sqrt(num)
        if (num % i == 0) return false;
    }
    return true;
}

// Function that takes N and prints primes up to N
void printPrimes(int n) {
    bool first = true;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            if (!first) cout << " "; // Add space between numbers
            cout << i;
            first = false;
        }
    }
}

int main() {
    int n;
    if (cin >> n) {
        printPrimes(n);
    }
    return 0;
}