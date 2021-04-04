// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int smallest = 0;
    bool check = true;

    for (size_t i = 21; check; i++)
    {
        for (size_t j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                check = true;
                break;
            }
            check = false;
        }

        if (check == false)
        {
            smallest = i;
            break;
        }
    }

    cout << smallest << endl;

    return 0;
}
