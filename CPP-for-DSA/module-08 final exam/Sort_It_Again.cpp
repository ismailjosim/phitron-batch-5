#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool comp(Student x, Student y)
{
    if (x.eng_marks > y.eng_marks)
    {
        return true;
    }
    else if (x.eng_marks < y.eng_marks)
    {
        return false;
    }
    else
    {

        if (x.math_marks > y.math_marks)
        {
            return true;
        }
        else if (x.math_marks < y.math_marks)
        {
            return false;
        }
        else
        {
            return x.id < y.id;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    // sort the student
    sort(a, a + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
