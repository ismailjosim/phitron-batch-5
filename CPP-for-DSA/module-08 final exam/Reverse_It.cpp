#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    // swap
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i].s, a[n - i - 1].s);
        // a[i].s => a[i].s => Rakib 7 B 90
        // a[n-i-1].s => a[3-0-1].s => a[2].s => Ahsan 9 C 36
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << endl;
    }
    return 0;
}
