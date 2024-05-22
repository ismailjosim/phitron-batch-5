#include <bits/stdc++.h>

using namespace std;

// step 01: create class
class Person
{
public:
    char name[100];
    int age;
    double cgpa;
};

int main()
{
    // step 02: create object using class
    Person p1, p2;

    // step 03: take input
    cin.getline(p1.name, 100);
    cin >> p1.age >> p1.cgpa;

    getchar(); // remove extra line

    cin.getline(p2.name, 100);
    cin >> p2.age >> p2.cgpa;

    cout << p1.name << " " << p1.age << " " << p1.cgpa << endl;
    cout << p2.name << " " << p2.age << " " << p2.cgpa << endl;

    return 0;
}
