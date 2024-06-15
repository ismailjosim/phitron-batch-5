#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;

    Student(int id, const char *name, char section, int totalMarks)
    {
        this->id = id;
        strncpy(this->name, name, 101);
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

Student *createStudent(int id, const char *name, char section, int totalMarks)
{
    return new Student(id, name, section, totalMarks);
}

int main()
{
    int t;
    cin >> t;
    Student *students[3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; ++j)
        {
            int id;
            char name[101];
            char section;
            int totalMarks;
            cin >> id >> name >> section >> totalMarks;
            students[j] = createStudent(id, name, section, totalMarks);
        }

        Student *topStudent = students[0];
        for (int j = 1; j < 3; ++j)
        {
            if (students[j]->totalMarks > topStudent->totalMarks ||
                (students[j]->totalMarks == topStudent->totalMarks && students[j]->id < topStudent->id))
            {
                topStudent = students[j];
            }
        }

        cout << topStudent->id << " " << topStudent->name << " " << topStudent->section << " " << topStudent->totalMarks << endl;

        for (int j = 0; j < 3; ++j)
        {
            delete students[j];
        }
    }

    return 0;
}
