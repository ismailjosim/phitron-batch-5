#include <bits/stdc++.h>

using namespace std;

int main()
{

    // *1: initialization
    //* @Recommended way
    string a = "Hello World";

    //* (ii): using constructor:
    string b("Hello word");

    //* (iii): take specific character
    string c("hello word", 4);

    //* (iv): if want to return after a specific char
    string a = "Hello World";
    string d(a, 4);

    //* 2. if we want to print similar keyword
    string e(10, 'x');

    return 0;
}
