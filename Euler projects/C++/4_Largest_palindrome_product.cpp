#include <bits/stdc++.h>

using namespace std;

int reverse(int);

int main(int argc, char const *argv[])
{
    int n = 0;

    for (int i = 999; i >= 0; i--)
        for (int j = i; j >= 0; j--)
        {
            int x = i * j;
            if (x > n)
                if (x == reverse(x))

                    n = x;
        }

    cout << n << endl;

    return 0;
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}
