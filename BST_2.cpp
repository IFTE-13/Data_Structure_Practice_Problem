
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int employeeId;
    struct Node *left, *right;
};
bool Search(struct Node* root, int key)
{
    while (root != NULL) {
        if (key > root->employeeId)
            root = root->right;

        else if (key < root->employeeId)
            root = root->left;
        else
            return true;
    }
    return false;
}

struct Node* newNode(int item)
{
    struct Node* temp = new Node;
    temp->employeeId = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* insert(struct Node* Node, int employeeId)
{
    if (Node == NULL)
        return newNode(employeeId);

    if (employeeId < Node->employeeId)
        Node->left = insert(Node->left, employeeId);
    else if (employeeId > Node->employeeId)
        Node->right = insert(Node->right, employeeId);

    return Node;
}
int main()
{

    //Crating BST
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);
    insert(root, 6);
int a; cin>>a; if (Search(root, a))
        {
            cout <<"Employee Found";
            cout<<endl;
        }
       else
        {
            cout <<"Employee Not Found";
            cout<<endl;
        }


    return 0;
}
