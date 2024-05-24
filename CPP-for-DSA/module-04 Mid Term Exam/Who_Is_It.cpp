#include <bits/stdc++.h>

using namespace std;

#include <string>

class Student
{
public:
    int id;
    string name;
    char section;
    int totalMarks;

    Student(int id, string name, char section, int totalMarks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

Student *instance(int id, string name, char section, int totalMarks)
{
    Student *personOne = new Student(id, name, section, totalMarks);
    return personOne;
}

int main()
{
    int t;
    cin >> t;
    Student *students[3];
    for (int i = 0; i < t; i++)
    {

        for (int i = 0; i < 3; ++i)
        {
            int id;
            string name;
            char section;
            int totalMarks;
            cin >> id >> name >> section >> totalMarks;
            students[i] = instance(id, name, section, totalMarks);
        }
        Student *topStudent = students[0];
        for (int i = 1; i < 3; ++i)
        {

            if (students[i]->totalMarks > topStudent->totalMarks)
            {
                topStudent = students[i];
            }
        }

        cout << topStudent->id << " " << topStudent->name << " " << topStudent->section << " " << topStudent->totalMarks << endl;

        for (int i = 0; i < 3; ++i)
        {
            delete students[i];
        }
    }

    return 0;
}
