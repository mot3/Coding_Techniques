#include <iostream>

using namespace std;

int main()
{
    int myarray[5] = {12, 4, 3, 1, 15};

    cout << "Input list is \n";
    for (int i = 0; i < 5; i++)
        cout << myarray[i] << "\t";

    for (size_t i = 0; i < 5; i++)
    {
        int temp = myarray[i];
        int j = i - 1;

        while (j >= 0 && temp <= myarray[j])
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }

    cout << "\nSorted list is \n";
    for (int i = 0; i < 5; i++)
        cout << myarray[i] << "\t";
}