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
        : id(id), name(name), section(section), totalMarks(totalMarks) {}
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Initialize topStudent with minimal values
        Student topStudent(0, "", 'A', -1);

        for (int i = 0; i < 3; ++i)
        {
            int id;
            string name;
            char section;
            int totalMarks;
            cin >> id >> name >> section >> totalMarks;

            if (totalMarks > topStudent.totalMarks)
            {
                topStudent = Student(id, name, section, totalMarks);
            }
        }

        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.totalMarks << endl;
    }

    return 0;
}
