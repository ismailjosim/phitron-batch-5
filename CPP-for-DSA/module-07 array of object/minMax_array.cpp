#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string name;
    int age;
    int marks;
};
int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i].name >> arr[i].age >> arr[i].marks;
    };

    // * find minimum value with normal loop
    Student mini;
    mini.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mini.marks)
        {
            mini = arr[i];
        }
    }

    cout << mini.name << " " << mini.age << " " << mini.marks << endl;

    // * find max value for the array of object
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks > mx.marks)
        {
            mx = arr[i];
        }
    }
    cout << mx.name << " " << mx.age << " " << mx.marks << endl;

    return 0;
}
