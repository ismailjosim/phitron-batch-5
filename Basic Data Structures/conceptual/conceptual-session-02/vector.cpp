#include <bits/stdc++.h>

using namespace std;

int main()
{
    // normal array
    int arr[] = {10, 20, 30, 40, 50};

    // vector array
    vector<int> a;
    vector<int> aa = {10, 20, 30, 40, 50};
    vector<int> b(5, 10); // [10,10,10,10,10]

    // know the array size
    cout << aa.size();

    // add element at the end of the vector
    aa.push_back(10);

    // delete an element from vector
    aa.pop_back();

    // * inert elements at a specific position
    vector<int> x = {10, 20, 30, 40, 50};
    vector<int> y = {100, 200, 300};

    // add single elemnt to a specific positon
    x.insert(x.begin(), 0);

    // add all array element to a specific position
    x.insert(x.begin() + 2, y.begin(), y.end());

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    /*
     * vector.insert(pos,val);
     * vector.insert(pos,times, val);
     */

    return 0;
}
