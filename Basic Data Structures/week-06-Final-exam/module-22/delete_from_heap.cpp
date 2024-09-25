#include <bits/stdc++.h>

using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
        {
            break;
        }

        cur_idx = parent_idx;
    };
}

void delete_heap(vector<int> &v)
{
    // step 01: set last index to first index
    v[0] = v[v.size() - 1];

    // step 02: remove last index
    v.pop_back();

    // step 03: swap value
    int cur = 0;
    while (true)
    {
        // step 01: get left right and last index
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            //* if two index are available then swap based on max value
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {

                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {

                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // * Only Left available
            if (v[left_idx] > v[cur])
            {

                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // * only right available
            if (v[right_idx] > v[cur])
            {

                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    };
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    delete_heap(v);

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
