#include <iostream>
using namespace std;

int sum_even_fib(int n)
{
    int a = 0, b = 1, c, sum = 0;

    while (true)
    {
        c = a + b;
        a = b;
        if (c >= n)
            break;
        b = c;

        if(b % 2 == 0)
            sum += b;
    }
    return sum;
}

int main()
{
    int n = 4000000;

    cout << sum_even_fib(n) << endl;

    return 0;
}