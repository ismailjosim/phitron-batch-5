#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {

            return a.roll > b.roll;
        }

        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, Compare> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {

            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (cmd == 1)
        {

            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2)
        {

            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
