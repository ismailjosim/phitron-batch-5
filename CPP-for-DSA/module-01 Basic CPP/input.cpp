#include <iostream>
#include <string>

using namespace std;

int main()
{
    // * Basic Integer Input
    int number;
    cin >> number;
    cout << "Your entered Value is: " << number << endl;

    //* multiple values
    int age;
    double salary;
    cin >> age >> salary;

    cout << "Your age: " << age << endl;
    cout << "Your salary: " << salary << endl;

    // * Input For a String
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    //* For strings with spaces, use getline
    string fullName;
    getline(cin, fullName);
    // alternative method
    // cin.getline(name, 100);
    cout << "Hello, " << fullName << "!" << endl;

    // * Array Input
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
