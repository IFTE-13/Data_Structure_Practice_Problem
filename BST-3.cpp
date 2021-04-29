#include<bits/stdc++.h>
using namespace std;

struct Node{
    int id;
    Node* right;
    Node* left;
};

Node* create(int id){
    Node* temp = new Node();
    temp -> id = id;
    temp -> right = temp -> left = NULL;
    return temp;
}

void insert(Node* &root, int id){
    if(root == NULL){
        root = create(id);
    }

    else if(root ->id>id) {
        insert(root->left,id);
    }
    else{
        insert(root-> right, id);
    }
}

void display(Node* root){       //In-order == Sorted array
    if(root != NULL){
        display(root->left);    //Left child
        cout<<root->id<<" ";    //Parent
        display(root->right);   //Right child
    }
}

void seacrh(){
    Node* value = root;
    int x;
    bool found = false;

    cout<<"Enter the search ID: ";
    cin>>x;

    while(value != NULL){
        if(value -> id == x){
            found = true;
            break;
        }
        else if(x < )
    }
}

int main(){
    Node* root = NULL;
    int n, num;
    cin>>n;
    for(int i=0; i<n; i++){
    cin>>num, insert(root, num);
    }
    display(root);
}
