#include <bits/stdc++.h>

using namespace std;

int main()
{
    //* Declare the Vector
    vector<int> v;

    //* Input the Number of Elements:
    int n, input;
    cin >> n;

    // * Read the Elements into the Vector:
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    // * Output the Vector:
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

//* ভেক্টর হলো এ্যারে। vector এ সরাসরি কোন এলিমেন্ট এ্যাড করা যায় না ইনপুট থেকে কারণ আমরা যাখন কোন একটা vector বানাই তখন তার সাইজ দেওয়া থাকে না। তাহলে আমরা যদি এইভাবে লিখি (v[0],v[1]) তাহলে কিন্তু তার একসেস পাবে না। তাই এর জন্য আমরা v.push_back(input); মেথড ব্যবহার করে থাকি। push_back এর কারণে vector এর সাইজ ইনক্রিজ করা যায়।

//* চাইলে আগে থেকে সাইজ দিয়ে দেওয়া যায়। vector<int> v(n); এক্ষেত্রে push_back() ব্যবহার করতে হবে না।
