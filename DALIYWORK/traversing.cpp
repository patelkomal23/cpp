#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;
};
int main()
{
    Node *ptr = NULL;

    Node *HEAD = new Node();
    HEAD->data = 25;
    HEAD->Next = NULL;

    ptr = HEAD;

    Node *current = new Node();
    current->data = 56;
    current->Next = NULL;
    HEAD->Next = current;

    current = new Node();
    current->data = 66;
    current->Next = NULL;
    HEAD->Next->Next = current;

    current = new Node();
    current->data = 86;
    current->Next = NULL;
    HEAD->Next->Next->Next = current;
    while (ptr != NULL)
    {
        cout << ptr->data<<endl;
        ptr = ptr->Next;
    }

    //    cout << "Head: " << HEAD->data << ", Address: " << HEAD->Next << endl;
    //     cout << "n2: " << current->data << ", Address: " << HEAD->Next << endl;
    //     cout << "n3: " << current->data << ", Address: " << HEAD->Next->Next << endl;
    //     cout << "n4: " << current->data << ", Address: " << HEAD->Next->Next->Next << endl;
    return 0;
}
