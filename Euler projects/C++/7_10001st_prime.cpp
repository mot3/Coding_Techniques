// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int count = 10001, myPrime = 2, countPrime = 1;

    for (size_t testPrime = 3; countPrime < count; testPrime = testPrime + 2)
        if (isPrime(testPrime))
        {
            myPrime = testPrime;
            countPrime++;
        }

    cout << myPrime << endl;

    return 0;
}
