#include <bits/stdc++.h>

using namespace std;

int main()
{
    //* type 01: vector init without size and value
    vector<int> v;

    //* type 02: with size
    vector<int> v(5); // will create 5 size array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //* type 03: with size and value
    vector<int> v(5, 2); // will create 5 size array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //* store dynamic values and size from input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    // * type 04: copy from another vector
    vector<int> v1(5, 100);

    // * to copy just use the name of the main vector
    vector<int> v2(v1);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << ' ';
    };
    cout << endl;

    //* Type 05: copy from and array;
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    };
    cout << endl;

    return 0;
}
