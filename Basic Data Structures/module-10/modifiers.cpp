#include <bits/stdc++.h>

using namespace std;

int main()
{
    // * 1: assign to new list
    list<int> list1 = {10, 20, 30, 40, 50};
    list<int> list2;

    // * method 01
    list2 = list1;
    // method 2
    list2.assign(list1.begin(), list1.end());

    list<int> list3 = {10, 20, 30, 40, 50};

    // * push_back: add an element to the tail of the list
    list3.push_back(60);

    // * push_front: add element to the head of the list
    list3.push_front(0);

    // * pop_back: remove an element to the tail of the list
    list3.pop_back();

    // * pop_front: remove head of hte lit
    list3.pop_front();

    //*insert(): Insert elements at a specific position. O(N)/O(N+K)
    list3.insert(next(list3.begin(), 0), 100);
    // * for multiple insertion
    // list3.insert(next(list3.begin(), 0), {100, 200, 300, 400, 500});
    // list3.insert(next(list3.begin(), 0), list1.begin(), list1.end());

    //* erase(): Delete elements from a specific position.
    // list3.erase(next(list3.begin(), 0));

    //* erase a certain range
    list3.erase(next(list3.begin(), 0), next(list3.begin(), 2));

    //* replace: Replace all the value with replace_value. Not under a list STL.
    replace(list3.begin(), list3.end(), 30, 100);

    // for (int v : list3)
    // {
    //     cout << v << endl;
    // }

    //* Find the value V. Not under a list STL.
    list<int> list4 = {10, 20, 30, 40, 50};

    auto it = find(list4.begin(), list4.end(), 100);
    if (it == list4.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}
