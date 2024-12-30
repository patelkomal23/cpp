#include <iostream>
using namespace std;
// #define NULL_null;

class Node
{
public:
    int data; // variable name
    Node *Next; // main node and pointer
};

int main()
{
    Node *HEAD = NULL; // main node (first node)
    HEAD = new Node(); // object of pointer
    HEAD->data = 25; // store value
    HEAD->Next = NULL; // lats value null

    Node *n2 = new Node(); // second node
    n2->data = 98;
    n2->Next = NULL;
    HEAD->Next = n2; // next node catch

    Node *n3 = new Node(); // thord  node
    n3->data = 50;
    n3->Next = NULL;
    n2->Next = n3; // next node cach

    Node *n4 = new Node(); // forth node
    n4->data = 80;
    n4->Next = NULL;
    n3->Next = n4; // next node catch

    cout << "Head: " << HEAD->data << ", Address: " << HEAD->Next << endl;
    cout << "n2: " << n2->data << ", Address: " << n2->Next << endl;
    cout << "n3: " << n3->data << ", Address: " << n3->Next << endl;
    cout << "n4: " << n4->data << ", Address: " << n4->Next << endl;
    return 0;
}
