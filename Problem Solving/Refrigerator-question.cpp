#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    if (T < 0)
        cout << "Ice";
    else if (T > 100)
        cout << "Steam";
    else
        cout << "Water";

    cout << endl;

    return 0;
}
