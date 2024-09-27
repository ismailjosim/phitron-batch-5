#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    string country;

    Person(string name, int age, string country)
    {
        this->name = name;
        this->age = age;
        this->country = country;
    }
};
class comp
{
public:
    bool operator()(Person a, Person b)
    {
        if (a.age <= b.age)
            return true;
        else
            return false;
    }
};
int main()
{
    int n;
    cin >> n;

    priority_queue<Person, vector<Person>, comp> pq;

    for (int i = 0; i < n; i++)
    {
        string name, country;
        int age;
        cin >> name >> age >> country;
        Person studentOne(name, age, country);
        pq.push(studentOne);
    };

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().age << " " << pq.top().country << endl;
        pq.pop();
    }

    return 0;
}
