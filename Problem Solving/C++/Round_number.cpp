// Description in https://bit.ly/3suf4aB

#include <bits/stdc++.h>

using namespace std;

bool repeat(string);
bool sequential(string);
bool mirror(string);
bool isRound(string num)
{
    if (repeat(num) || sequential(num) || mirror(num))
        return true;

    return false;
}

int main()
{
    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        string num = "";
        cin >> num;

        if (isRound(num))
            cout << "Ronde!";
        else
            cout << "Rond Nist";

        cout << endl;
    }

    return 0;
}

bool repeat(string num)
{
    int count;

    for (char digit : num)
    {
        count = 0;

        for (char digitCompare : num)
            if (digit == digitCompare)
                count++;

        if (count >= 4)
            return true;
    }

    return false;
}

bool sequential(string num)
{
    for (size_t i = 0; i < 6; i++)
    {
        char digit = num[i];
        if (digit == num[i + 1] && digit == num[i + 2])
            return true;
    }

    return false;
}

bool mirror(string reverseNum)
{
    string num = reverseNum;

    reverse(reverseNum.begin(), reverseNum.end());

    if (num == reverseNum)
        return true;

    return false;
}
