// Description in https://projecteuler.net/problem=6

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int up = 100;
    int sumOFsquare = 0, squareOFsum = 0;

    for (size_t natural = 1; natural <= up; natural++)
    {
        sumOFsquare += pow(natural, 2);
        squareOFsum += natural;
    }

    squareOFsum = pow(squareOFsum, 2);

    int difference = squareOFsum - sumOFsquare;

    cout << difference << endl;

    return 0;
}
