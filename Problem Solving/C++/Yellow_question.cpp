// Description in https://bit.ly/3wYuEOX

#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;

    string wow = "W";

    for (size_t i = 0; i < count; i++)
    {
        wow += 'o';
    }

    wow += "w!";

    cout << wow << endl;

    return 0;
}
