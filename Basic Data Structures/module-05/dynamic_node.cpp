#include <bits/stdc++.h>

using namespace std;

/*
 * amra jodi kono ekta function er modde jodi ekta obj create kori tahole oita jodi memory te save rakhte cai tahole oi function ke return kore dite hobe. ekon amra jodi main fn bade onno kono ekta function er modde ekta obj create korlam and oita ke linked list er sathe link kore dilam. ekon ei fn ta jokhon ferot jabe tokhon se oi memory tao kintu delete kore diye jabe. karon ami ei obj return kori nai. age ei problem er solution amra return kore solve korece but amra to ekhan theke return korbo na. tahole eta kivabe korte hobe.

 * solution: er jonno amra dynamic object create korbo and oi obj kei link kore dibo.

*/
// * create dynamic node:
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // * first node /Head
    //* normal
    // Node head(10)
    Node *head = new Node(10);
    Node *a = new Node(20);

    // connect  a with head
    head->next = a;

    // print
    cout << head->data << endl;
    cout << a->data << endl;

    // print a value using head:
    cout << head->next->data << endl; //* here (head->next) simply the pointer of a.

    return 0;
}
