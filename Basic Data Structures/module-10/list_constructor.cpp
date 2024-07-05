#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 1. initialization
    list<int> myList(10, 5);

    // 2. copy from another list
    list<int> list1 = {10, 20, 30, 40, 50};
    list<int> list2 = {list1}; //* TC = O(N)

    // 3. copy from an Array
    int arr[5] = {60, 70, 80, 90, 100};

    list<int> list3(arr, arr + 5);

    // 3. copy from vector
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> list4(v.begin(), v.end());

    // iterate over linked list
    for (auto it = list4.begin(); it != list4.end(); it++)
    {
        cout << *it << endl;
    }

    // sort-cut iterator (if we only want to get value)
    for (int val : list4)
    {
        cout << val << endl;
    }

    return 0;
}
