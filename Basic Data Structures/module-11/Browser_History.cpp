
#include <bits/stdc++.h>

using namespace std;

int main()
{
<<<<<<< HEAD
    list<string> words;

    while (true)
    {
        string word;
        cin >> word;
        if (word == "end")
            break;
        words.push_back(word);
    }

    int t;
    cin >> t;
    cin.ignore();

    string current;
    while (t > 0)
    {

        string c;
        getline(cin, c);
        if (c.find("visit") == 0)
        {
            c.erase(0, 6);
            auto it = find(words.begin(), words.end(), c);
            if (it != words.end())
            {
                cout << *it << endl;
                current = *it;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c.find("prev") == 0)
        {
            if (current.empty())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                auto it = find(words.begin(), words.end(), current);
                if (it != words.end() && it != words.begin())
                {
                    it--;
                    cout << *it << endl;
                    current = *it;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
        }
        else if (c.find("next") == 0)
        {
            if (current.empty())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                auto it = find(words.begin(), words.end(), current);
                if (it != words.end())
                {
                    it++;
                    if (it != words.end())
                    {
                        cout << *it << endl;
                        current = *it;
                    }
                    else
                    {
                        cout << "Not Available" << endl;
                    }
                }
            }
        }
        t--;
    }
=======
>>>>>>> 57824f893143ca4ceeae70ee24dab35d67658bc1

    return 0;
}
