#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " " << endl;
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void invert(Node *root)
{
    if (root == NULL)
        return;
    invert(root->left);
    invert(root->right);
    swap(root->left, root->right);
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    int heightLeft = height(root->left);
    int heightRight = height(root->right);
    return max(heightLeft, heightRight) + 1;
}
int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    node1->left = node2;
    node1->right = node3;
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    node2->left = node4;
    node2->right = node5;
    Node *node6 = new Node(6);
    node3->right = node6;
    preorder(node1);
    cout << endl;
    invert(node1);
    preorder(node1);
}