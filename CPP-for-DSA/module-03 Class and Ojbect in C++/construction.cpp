#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int className;
    double GPA;
    // Student(int r, int c, double g) // exact value will conflict and give garbage value
    Student(int roll, int className, double GPA) // exact value will conflict and give garbage value
    {
        (*this).roll = roll;
        (*this).className = className;
        (*this).GPA = GPA;

        //* short-cut of the above this de-reference: when i want to de-reference also access the member from that group will can use this method:
        this->className = className;
    }
};

main()
{
    Student instance_one(29, 9, 5.00);

    return 0;
}

// this keyword is a built-in pointer
