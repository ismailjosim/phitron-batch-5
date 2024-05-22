#include <bits/stdc++.h>

using namespace std;

// step 01: create class
class Student
{
public: //
    string name;
    int age;
    int roll;
    string className;
    vector<int> marks;
};

int main()
{
    // step 02: Creating an object of the Student class
    Student studentOne;

    // step 03: Assigning values to the object's attributes
    studentOne.name = "John Doe";
    studentOne.age = 20;
    studentOne.roll = 101;
    studentOne.className = "CS101";
    studentOne.marks = {85, 90, 92};

    // step 04: Printing the object's attributes
    cout << "Name: " << studentOne.name << endl;
    cout << "Age: " << studentOne.age << endl;
    cout << "Roll Number: " << studentOne.roll << endl;
    cout << "Class: " << studentOne.className << endl;
    cout << "Marks: ";
    for (int mark : studentOne.marks)
    {
        cout << mark << " ";
    }
    cout << endl;
    return 0;
}
