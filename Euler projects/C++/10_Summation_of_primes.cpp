// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#include <bits/stdc++.h>

using namespace std;

vector<int> primes = {2};

bool isPrime(int n)
{
    // Check from 2 to n-1
    for (auto i = primes.begin(); i != primes.end(); ++i)
        if (n % *i == 0)
        {
            return false;
        }

    primes.push_back(n);
    return true;
}

int main()
{
    int max = 2000000;
    long long sum = 2;

    for (size_t i = 3; i < max; i += 2)
    {
        if (isPrime(i))
            sum += i;
    }

    cout << sum << endl;
    cout << primes.size() << endl;

    return 0;
}
