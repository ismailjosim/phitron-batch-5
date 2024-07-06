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
        string input;
        cin >> input;
        if (input == "end")
        {
            break;
        }
        words.push_back(input);
    }

    for (auto word : words)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
