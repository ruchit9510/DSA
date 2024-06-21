#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num/2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void generatePrimes(int n, vector<int>& primes) {
    int num = 2;
    while (primes.size() < n) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Enter how many prime numbers you want to generate: ";
    cin >> n;

    vector<int> primes;
    generatePrimes(n, primes);

    for (int i = 0; i < primes.size(); ++i) {
        if (i > 0) {
            cout << ",";
        }
        cout << primes[i];
    }
    cout << endl;

    return 0;
}
