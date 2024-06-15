#include <bits/stdc++.h>

using namespace std;

int main()
{
    //* v= or v.assign() Assign another vector.
    vector<int> x = {10, 20, 30, 40, 50};
    vector<int> y = {1, 2, 3};
    y = x; // if both vectors size are same then there TC will be O(1) else TC will be O(N);

    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    };
    cout << endl;
    // pop_back() remove the last element
    y.pop_back();
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    };

    cout << endl;

    //* insert(): Insert elements at a specific position. it's TC will be O(N+K); N = vector size; K = Number Of Element to be inserted. মানে ২টা লুপ চলবে। এদের মধ্যে যেটা বড় সেটাই হবে তার Time complexity

    //*here it's pointer is: v.begin() 0 index, +1, +2,+3,+4
    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() + 2, 10);
    // * if we want to insert multiple values from another vector
    vector<int> m = {100, 200, 300, 400, 500};
    v.insert(v.begin() + 3, m.begin(), m.end());

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // * Erase(): Delete elements from a specific position
    v.erase(v.begin() + 3);

    // for specific index range
    v.erase(v.begin() + 2, v.begin() + 4);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // * for multiple values
    v.erase(v.begin() + 4, v.end()); // at the end of of the vector
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
