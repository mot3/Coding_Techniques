// You have been given an array of size N consisting of integers.
// In addition you have been given an element M you need to find and print the index of the last occurrence of this element M in the array
// if it exists in it, otherwise print -1. Consider this array to be 1 indexed.

// Input Format:

// The first line consists of 2 integers N and M denoting the size of the array and the element to be searched for in the array respectively .
// The next line contains N space separated integers denoting the elements of of the array.

// Output Format

// Print a single integer denoting the index of the last occurrence of integer M in the array if it exists, otherwise print -1.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int box[N];

    // Get Array
    for (size_t i = 0; i < N; i++)
    {
        cin >> box[i];
    }
    
    bool check = false;

    // main for
    for (size_t i = 0; i < N; i++)
        if(box[i] == M){
            check = true;
            break;
        }
    
    cout << (check? N : -1);

    cout << endl;
    return 0;
}