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

    // with single word
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].age >> arr[i].marks;
    }

    // string with space
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);

        cin >> arr[i].age >> arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].marks << endl;
    }

    // with dynamic array
    Student *arr = new Student[n];

    // rest of the work is similar to normal array

    return 0;
}
