#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int className;
    double gpa;
    Student(int roll, int className, double GPA)
    {
        this->roll = roll;
        this->className = className;
        this->gpa = GPA;
    }
};

Student fun()
{
    Student personOne(1001, 9, 3.02);
    return personOne;
};

int main()
{
    Student ans = fun();
    return 0;
}
// * when we run the code the above fun function will be removed from the memory but it will return a copy of that variable. it kind of works like variable.
