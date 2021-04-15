// Description in https://projecteuler.net/problem=8

#include <bits/stdc++.h>

using namespace std;

string getAdditional()
{
    string alline;
    {
        ifstream additional("./../Additional files/8_Largest_product_in_a_series.txt");
        string line;
        while (getline(additional, line))
        {
            alline += line;
        }
        additional.close();
    }
    return alline;
}

long long getMulNum(string &str, size_t n, size_t digit)
{
    long long mul = 1;

    for (size_t i = n; i < n + digit; i++)
    {
        mul *= (int)str[i] - 48;
    }
    return mul;
}

int main()
{
    size_t digit = 13;
    
    string allNum = getAdditional();

    long long greatest = 0;

    for (size_t i = 0; i < 1000-digit; i++)
    {
        long long testG = getMulNum(allNum, i, digit);
        if (testG > greatest)
            greatest = testG;
    }

    cout << greatest << endl;

    return 0;
}