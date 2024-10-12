#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    //* Initialize adjacency matrix for the graph
    int mat[n][n];

    //* Set all elements of the matrix to 0 (no edges initially)
    memset(mat, 0, sizeof(mat));

    //* Input edges and mark them in the adjacency matrix
    while (e--)
    {
        int a, b;
        cin >> a >> b; //* Input the two endpoints of an edge
        mat[a][b] = 1; //* Mark edge from node a to node b
        mat[b][a] = 1; //* Mark edge from node b to node a (only for undirected graphs)
        // * For directed graphs, this line should be omitted
    }

    //* Print the adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " "; //* Output 0 or 1 for each element in the matrix
        }
        cout << endl; //* Move to the next row after each line
    }

    //* Check if node 1 and node 4 are connected
    if (mat[1][4] == 1)
    {
        cout << "Connected" << endl; //* Print "Connected" if there is an edge between node 1 and 4
    }
    else
    {
        cout << "Not Connected" << endl; //* Print "Not Connected" if there is no edge
    }

    return 0;
}
