// Description in https://projecteuler.net/problem=8

#include <bits/stdc++.h>

using namespace std;

string getAll()
{
    ifstream additional("./../Additional files/8_Largest_product_in_a_series.txt");
    string line;
    string alline;
    while (getline(additional, line))
    {
        alline += line;
    }
    additional.close();
    return alline;
}

long long getMulNum(string &str, size_t n)
{
    long long mul = 1;

    for (size_t i = n; i < n + 13; i++)
    {
        mul *= (long long)str[i] - 48;
    }
    return mul;
}

int main(int argc, char const *argv[])
{
    string allNum = getAll();

    long long greatest = 0;

    for (size_t i = 0; i < 1000; i++)
    {
        long long testG = getMulNum(allNum, i);
        if (testG > greatest)
            greatest = testG;
    }

    cout << greatest << endl;

    return 0;
}