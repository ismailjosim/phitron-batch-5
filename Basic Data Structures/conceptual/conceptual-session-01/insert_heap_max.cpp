#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    // * constructor
    MaxHeap() {
    };

    // * arrange value
    void up_heapfiy(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {

            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    };

    // push value
    void push(int v)
    {
        // push value to that nodes vector
        nodes.push_back(v);

        //
        up_heapfiy(nodes.size() - 1);
    };
    void print()
    {
        for (int node : nodes)
        {
            cout << node << " ";
        }
        cout << endl;
    }
};

int main()
{
    MaxHeap heap;
    heap.push(10);
    heap.push(1);
    heap.push(2);
    heap.push(3);
    heap.push(4);
    heap.push(5);

    heap.print();
    return 0;
}
