//Write a program to create prime number using operator overloading.
#include <iostream>
#include <vector>
using namespace std;

class PrimeGenerator {
private:
    static vector<bool> isPrime;
    static int currentPrime;

public:
    PrimeGenerator() {
        // Initialize isPrime vector with all true values
        if (isPrime.empty()) {
            isPrime.resize(1000, true);
            isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
            currentPrime = 2; // Start with the first prime number (2)
        }
    }

    // Overload the () operator to generate the next prime number
    int operator()() {
        int n = isPrime.size();
        while (currentPrime < n) {
            if (isPrime[currentPrime]) {
                int prime = currentPrime;
                // Mark all multiples of the current prime as not prime
                for (int i = currentPrime * 2; i < n; i += currentPrime) {
                    isPrime[i] = false;
                }
                // Move to the next prime number
                currentPrime++;
                return prime;
            }
            currentPrime++;
        }
        return -1; // No more prime numbers to generate
    }
};

// Initialize static members
vector<bool> PrimeGenerator::isPrime;
int PrimeGenerator::currentPrime;

int main() {
    PrimeGenerator primeGen;

    cout << "First 10 prime numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        int prime = primeGen();
        if (prime != -1) {
            cout << prime << " ";
        } else {
            cout << "No more prime numbers." << endl;
            break;
        }
    }

    return 0;
}
