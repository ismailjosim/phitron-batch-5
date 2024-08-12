#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    //* vector size
    v.size();

    //* maximum possible size

    cout << v.max_size();

    //* capacity: 0 if no size is defined. whenever we insert values it will increase its capacity. we can use pushback() function to add new value. also it's capacity will increase
    cout << v.capacity();
    v.push_back(10);
    cout << v.capacity();
    // * Note: It also double it's capacity when value added like this: 0 1 2 4 8 16. if capacity is over it will increase 2X of it's capacity

    //* clear(): Clear the vector elements. Don't delete the memory, only clear the value

    v.clear(); // it won't clear the memory

    // * empty(): check our vector is empty or not. if empty return true otherwise false

    // * resize(): change the size of vector
    v.resize(2); //* If the vector is 5 then it will only return the first two value rest values will be reset.

    v.resize(7, 500); //* inc the size of the vector

    return 0;
}
