#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {5, 2, 8, 1, 9};

    // step 01: Find the length of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // step 02: sort using sort() method in ascending
    sort(arr, arr + size); //* here the last argument is => 0 index + arr size means last index

    // step 03: print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // step 05: for descending order
    sort(arr, arr + size, greater<int>()); //* greater is a built-in compare function. greater function <array data type>()

    // step 06: print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
