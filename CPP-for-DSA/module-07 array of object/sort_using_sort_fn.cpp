#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;
};

// * custom comparison function
bool cmp(Student a, Student b)
{
    // solution 1: ascending order
    if (a.marks <= b.marks)
    {
        return true;
    }
    else
    {
        return false;
    }

    // solution 1: short-cut of the above code
    return a.marks >= b.marks;
    return a.marks <= b.marks;

    // solution 2: if marks are same then sort based on lesser age
    if (a.marks < b.marks)
    {
        return true;
    }
    else if (a.marks > b.marks)
    {

        return false;
    }
    else
    {
        if (a.age < b.age)
        {
            return true;
        }
        else
        {
            return false;
        }
        return a.age < b.age;
    }

    // Solution 2: short-cut solution of the above code
    if (a.marks == b.marks)
    {
        return a.age < b.age;
    }
    else
    {
        return a.marks < b.marks;
    }
}
int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i].name >> arr[i].age >> arr[i].marks;
    };

    //* sort using sort function (custom comparison function)
    sort(arr, arr + n, cmp);

    // * output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].marks << endl;
    }

    return 0;
}
