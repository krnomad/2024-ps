#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void generateNumbers(const string &str, unordered_set<int> &result) {
    string temp = str;
    sort(temp.begin(), temp.end());

    do {
        for (size_t len = 1; len <= temp.size(); ++len) {
            int number = stoi(temp.substr(0, len));
            result.insert(number);
        }
    } while (next_permutation(temp.begin(), temp.end()));
}

int solution(string numbers) {
    unordered_set<int> uniqueNumbers;
    generateNumbers(numbers, uniqueNumbers);

    int primeCount = 0;
    for (int number : uniqueNumbers) {
        if (isPrime(number)) {
            primeCount++;
        }
    }

    return primeCount;
}