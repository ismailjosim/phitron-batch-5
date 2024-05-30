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

    // * sort selection: based on marks
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].marks > arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    // * show output
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].marks << endl;
    }

    //* if 2 value has same marks then sort will be based on age number (less number)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].marks > arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
            if (arr[i].marks == arr[j].marks)
            {
                if (arr[i].age > arr[j].age)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    // * output
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].marks << endl;
    }

    return 0;
}
