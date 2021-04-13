// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2

// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int max = 1000;
    for (int i = 1; i < max/3; i++)
        for (int j = i; j < max/2; j++)
            for (int k = j; k < max; k++)
                if (((i * i) + (j * j)) == (k * k))
                    if (((i + j + k)) == 1000)
                        cout << i * j *  k << endl;

    return 0;
}
