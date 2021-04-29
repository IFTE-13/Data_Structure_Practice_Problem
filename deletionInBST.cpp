#include<iostream>
using namespace std;

bool c=false;

struct node
{
	int data;
	node* left;
	node* right;
};

struct node* getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void postorder(struct node* root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(struct node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(struct node* root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}

node* findMin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

struct node* Insert(struct node* root, int data)
{
	if (root == NULL)
		return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

bool Search(node*root,int value)
{
	if(root==NULL)
		return false;
	else if(root->data == value)
	{
		return true;
	}
	else if(value < root-> data)
		Search(root->left,value);
	else if(value > root->data)
		Search(root->right,value);
}


node* Delete( node* root,int value)
{
	c=Search(root,value);
	if(root==NULL)
		return root;
	else if(value< root->data)
	{
		root->left= Delete(root->left,value);
	}
	else if(value> root->data)
	{
		root->right= Delete(root->right,value);
	}

	// Node deletion
	else
	{
		//case 1: Leaf Node
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		//case 2: one child
		else if(root->left==NULL)
		{
			struct node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			struct node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		//case 3: 2 child
		else
		{
			struct node*temp=findMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
	return root;

}


int main()
{
	node* root=NULL;
	root=Insert(root,20);
	Insert(root,15);
	Insert(root,25);
	Insert(root,18);
	Insert(root,10);
	Insert(root,16);
	Insert(root,19);
	Insert(root,17);

	int search;
    cout<<"Choose your option "<<endl;
    cout<<"1.In-order "<<endl;
    cout<<"2.Pre-order "<<endl;
    cout<<"3.Post-order "<<endl;
    cout<<"4.Search a value "<<endl;
    cout<<"5.Delete a value"<<endl;
    cin>>search;
    cout<<"You selected "<<search;
    cout<<endl;

    if(search == 1){
    cout<<"In-order : "<<endl;
    inorder(root);
    }

    else if(search == 2){
    cout<<"Pre-order : "<<endl;
    preorder(root);
    }

    else if(search == 3){
    cout<<"Post-order : "<<endl;
    postorder(root);
    }

    else if(search == 4){
        int i;
        int x[8] = {20, 15, 25, 10, 18, 16, 19, 17};
        cout<<"Input a value for searching "<<endl;
        cin>>i;
    for(int j= 0; j<8; j++){
     if(x[j] == i){
        cout<<"Found"<<endl;
        break;
    }
     if(j == 8-1) {
        cout<<"Not Found"<<endl;
    }
    }
    }

	else if(search == 5){
    cout<<"Choose your option "<<endl;
    cout<<"1.Leaf node "<<endl;
    cout<<"2.With One children "<<endl;
    cout<<"3.With Two children "<<endl;
    cout<<"Choose a option to delete a Node: ";
    int del;
    cin>>del;
    if(del == 1){
    cout<<"Before Deletion: "<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl<<endl;

	Delete(root,25);

	if(c)
	{
		cout<<"Node Deleted"<<endl;
		cout<<"\nAfter Deletion: "<<endl;
		cout<<"Inorder: ";
		inorder(root);
		cout<<endl;

	}
	else
		{
		    cout<<"Node Not Found"<<endl;
		}
    }
    if(del == 2){
        cout<<"Before Deletion: "<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl<<endl;

	Delete(root,16);

	if(c)
	{
		cout<<"Node Deleted"<<endl;
		cout<<"\nAfter Deletion: "<<endl;
		cout<<"Inorder: ";
		inorder(root);
		cout<<endl;

	}
	else
		{
		    cout<<"Node Not Found"<<endl;
		}
    }
    else if(del == 3){
    cout<<"Before Deletion: "<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl<<endl;

	Delete(root,15);

	if(c)
	{
		cout<<"Node Deleted"<<endl;
		cout<<"\nAfter Deletion: "<<endl;
		cout<<"Inorder: ";
		inorder(root);
		cout<<endl;

	}
	else
		{
		    cout<<"Node Not Found"<<endl;
		}
    }
	}

	return 0;
}
