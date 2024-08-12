#include <bits/stdc++.h>

using namespace std;
void fun(int *p)
{
    // p = NULL;
    cout << &p << endl;
};

int main()
{
    int v = 10;
    int *ptr = &v;
    fun(ptr);

    // cout << v << endl;
    cout << &ptr << endl; //* extract memory address

    return 0;
}
