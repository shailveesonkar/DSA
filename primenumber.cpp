#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    // Numbers less than 2 are not prime
    if (num <= 1) {
        return false;
    }
    
    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // num is divisible by i, so it's not prime
        }
    }
    
    return true; // num is prime
}

int main() {
    int start, end;
    
    // Taking input from the user for the range
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    
    // Print all prime numbers in the given range
    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    
    // Loop through all numbers in the range
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
