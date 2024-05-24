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
Student *fun()
{
    Student *personOne = new Student(1001, 10, 3.42);
    return personOne;
};
int main()
{
    Student *b = fun();
    cout << "Roll: " << b->roll << endl;
    cout << "Class: " << b->className << endl;
    cout << "GPA: " << b->gpa << endl;
    return 0;
}
