// amader list er modde je item gula ase oigula jodi visit dewa thake ar set amader doubly linked list er modde exist kore tahole oita print kore dite hobe. er pore ase prev mane tar ger ta jodi list e thake tahole print next e jodi list e thake print

/*
* facebook, google, Phitron, youtube twitter
* visit Phitron == Phitron
* visit prev => google
* visit prev => facebook
* visit prev => NULL so (Not Available)

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
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

    return 0;
}
