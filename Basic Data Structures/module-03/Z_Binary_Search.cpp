#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    // it shows time limit exceeded
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--) //* TC =
    {
        /* code */
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

// ekhane amra while loop ta ignore korte parbo na. amader ja korar dorkar seta amra nested loop jeta search er kaj kortece setakei komate hobe ar er jonnoi amader binary search use korte hobe.

// * method-02: using binary search
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++) //* O(N)
    {
        cin >> a[i];
    };

    // sort the value
    sort(a, a + n); //* O(NlogN)

    while (q--) //* O(Q)
    {
        /* code */
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;

        // * Need to optimize this part of the code using binary search which TC is O(N Log(n))
        while (l <= r)
        {
            /* code */
            int m = (l + r) / 2;
            if (a[m] == x)
            {
                flag = true;
                break;
            }

            if (x > a[m])
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

//* total TC calculate: O(N) + O(NlogN) +  O(Q) + O(logN)
//* O(N) + O(Q) is smaller then O(NlogN) + O(logN). so they are ignored
//* O(NlogN) +  O(logN) the maximum of two of them is O(NlogN) so our TC is O(NlogN)

//* so O(NlogN) can calculate upto: N = 10^5 + log2(100000) which is 16.61
//* if we calculate 16 * 10^6 = 1.6 * 10^6
//* in our case we can run 10^7 in one second which is efficient in our case.
