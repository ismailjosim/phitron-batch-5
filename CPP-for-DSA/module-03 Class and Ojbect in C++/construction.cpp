#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int className;
    double GPA;
    Student(int r, int c, double g)
    {
        roll = r;
        className = c;
        GPA = g;
    }
};

main()
{
    Student instance_one(29, 9, 5.00);

    return 0;
}
