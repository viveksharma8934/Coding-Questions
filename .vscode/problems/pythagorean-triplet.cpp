#include <iostream>
#include <stack>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    bool isPalindrome(Node *head)
    {
        stack<Node *> st;
        Node *t = head;
        while (t)
        {
            st.push(t);
            t = t->next;
        }
        while (t)
        {
            if (st.top()->data != t->data)
                return 0;
            st.pop();
            t = t->next;
        }
        return 1;
    }
};

int main()
{
    Node *head = NULL;
    Node *temp = NULL;
    int firstdata, l, n;
    cin >> n;
    cin >> firstdata;
    head = new Node(firstdata);
    temp = head;
    for (int i = 1; i < n; i++)
    {
        cin >> l;
        temp->next = new Node(l);
        temp = temp->next;
    }
    Solution obj;
    cout << obj.isPalindrome(head) << endl;
}