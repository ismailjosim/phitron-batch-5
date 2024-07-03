#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> list1 = {30, 10, 50, 20, 30, 10, 10, 40, 20, 10};

    //* remove: to remove all matched values
    // list1.remove(10);

    // * sort(): for sorting the values of list

    //* asc order
    list1.sort();

    //* desc order
    list1.sort(greater<int>());

    //*unique(): Deletes the duplicate values from the list. You must sort the list first.
    list1.unique(); //* works with both asc & desc order. O(NlogN);

    // * reverse the value
    list1.reverse();

    for (int val : list1)
    {
        cout << val << endl;
    }

    return 0;
}
