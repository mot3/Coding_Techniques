// You have been given an array A of size N . you need to sort this array non-decreasing oder using bubble sort.
// However, you do not need to print the sorted array .
// You just need to print the number of swaps required to sort this array using bubble sort

// Input Format

// The first line consists of a single integer N denoting size of the array.
// The next line contains N space separated integers denoting the elements of the array.

// Output Format Print the required answer in a single line

#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int *A, int n)
{
    int temp, counter = 0;
    for (int k = 0; k < n - 1; k++)
    {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for (int i = 0; i < n - k - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                // here swapping of positions is being done.
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                // swap(A[i], A[i+1]);
                counter++;
            }
        }
    }
    cout << counter << endl;
}

void getArray(int *arr, size_t N)
{
    for (size_t i = 0; i < N; i++)
        cin >> arr[i];
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int arr[N];

    getArray(arr, N);

    bubble_sort(arr, N);

    return 0;
}
