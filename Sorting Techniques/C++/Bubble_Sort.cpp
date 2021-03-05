#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int a[5] = {10, 2, 0, 43, 12};

    cout << "Input list ...\n";
    for (size_t i = 0; i < 5; i++)
        cout << a[i] << "\t";

    cout << endl;

    for (size_t i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    cout << "Sorted Element List ...\n";
    for (i = 0; i < 5; i++)
        cout << a[i] << "\t";

    cout << endl;

    return 0;
}