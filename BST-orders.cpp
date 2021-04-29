#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}

int main()
{
    struct Node* root = new Node(14);
    root->left = new Node(11);
    root->right = new Node(21);
    root->left->left = new Node(38);
    root->left->right = new Node(32);
    root->left->left->left = new Node(36);
    root->left->left->right = new Node(25);

    int search;
    cout<<"Choose your option "<<endl;
    cout<<"1.In-order "<<endl;
    cout<<"2.Pre-order "<<endl;
    cout<<"3.Post-order "<<endl;
    cout<<"4.Search a value "<<endl;
    cin>>search;
    cout<<"You selected "<<search;

    cout<<endl;
    if(search == 1){
    cout<<"In-order : "<<endl;
    printInorder(root);
    }
    else if(search == 2){
    cout<<"Pre-order : "<<endl;
    printPreorder(root);
    }
    else if(search == 3){
    cout<<"Post-order : "<<endl;
    printPostorder(root);
    }
    else if(search = 4){
        int i;
        int x[7] = {14, 11, 21, 38, 32, 36, 25};
        cout<<"Input a value for searching "<<endl;
        cin>>i;
    for(int j= 0; j<7; j++){
     if(x[j] == i){
        cout<<"Found"<<endl;
        break;
    }
     if(j == 7-1) {
        cout<<"Not Found"<<endl;
    }
    }
    }
    return 0;
}
