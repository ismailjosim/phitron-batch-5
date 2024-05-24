// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, s;
//         cin >> n >> s;

//         // loop over the array
//         int flag = 1;
//         if (n < 2)
//         {
//             cout << "NO" << endl;
//             break;
//         }

//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         for (int x = 0; x < n; x++)
//         {
//             for (int y = 0; y < n; y++)
//             {
//                 for (int z = 0; z < n; z++)
//                 {

//                     if (arr[x] != arr[y] && arr[x] != arr[z] && arr[y] != arr[z])
//                     {
//                         if (arr[x] + arr[y] + arr[z] == s)
//                         {
//                             flag = 1;
//                             break;
//                         }
//                         else
//                         {
//                             flag = 0;
//                         }
//                     }
//                 }
//             }
//         }

//         if (flag == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        bool flag = false;
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
