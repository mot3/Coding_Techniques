// You have been given an array A consisting of N integers. All the elements in this array A are unique.
// You have to answer some queries based on the elements of this array.
// Each query will consist of a single integer x.
// You need to print the rank based position of this element in this array considering that the array is 1 indexed.
// The rank based position of an element in an array is its position in the array when the array has been sorted in ascending order.

// Note: It is guaranteed that all the elements in this array are unique and for each x belonging to a query, value x shall exist in the array

// Input Format

// The first line consists of a single integer N denoting the size of array A.
// The next line contains N unique integers, denoting the content of array A.
// The next line contains a single integer q denoting the number of queries.
// Each of the next q lines contains a single integer x denoting the element whose rank based position needs to be printed.

// Output Format

// You need to print q integers denoting the answer to each query.

#include <bits/stdc++.h>

using namespace std;

void getArray(int *arr, size_t N)
{
    for (size_t i = 0; i < N; i++)
        cin >> arr[i];
    
}

// void printArray(int *arr, size_t N)
// {
//     for (size_t i = 0; i < N; i++)
//         cout << arr[i];

//     cout << endl;
// }

int binarySearch(int low,int high,int key, int *a)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid+1;
     }
   }
   return -1;                //key not found
 }

// Driver program
int main()
{
    size_t N;
    cin >> N;

    int arr[N];

    getArray(arr, N);

    size_t q;
    cin >> q;

    for (size_t i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        cout << binarySearch(0, N-1, x, arr) << endl;
    }
    
    return 0;
}
