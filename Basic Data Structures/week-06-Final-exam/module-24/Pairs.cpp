#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

bool comp(Student a, Student b)
{
    if (a.name == b.name)
    {

        return a.roll > b.roll;
    }

    return a.name < b.name;
}

int main()
{
    int n;
    cin >> n;

    vector<Student> students;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        students.push_back(Student(name, roll));
    }

    sort(students.begin(), students.end(), comp);

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].name << " " << students[i].roll << endl;
    }

    return 0;
}
