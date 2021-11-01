#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insetAtFirst(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head;
    insetAtFirst(head, 4);
    insetAtFirst(head, 5);
    insetAtFirst(head, 8);
    display(head);
}