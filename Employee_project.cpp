#include <bits/stdc++.h>
using namespace std;

struct Node {
    int employeeId;
    struct Node *left, *right;
};

struct employee{
    int employeeId;
    string employeeName;
    int employeeSalary;
    string employeeDept;
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

void insertEmployee(employee e){
    cout<<endl;
    cout<<"****************"<<endl;
    cout<<endl;
    cout<<"Inserted Details"<<endl;
    cout<<"ID:         "<<e.employeeId<<endl;
    cout<<"Name:       "<<e.employeeName<<endl;
    cout<<"Department: "<<e.employeeDept<<endl;
    cout<<"Salary:     "<<e.employeeSalary<<endl;
    cout<<endl;
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


    int z;
    cout<<"Welcome to Employee Portal"<<endl;
    cout<<"**************************"<<endl;
    cout<<"1. Insert an employee"<<endl;
    cout<<"2. Search an employee"<<endl;
    cout<<endl;
    cout<<"Choose your option: ";

    cin>>z;
    if( z == 1 ){

    employee e;
    cout<<endl;
    cout<<"Insert employee Informations"<<endl;
    cout<<"****************************"<<endl;
    cout<<"Employee ID ";
    cin>>e.employeeId;
    cout<<"Employee Name ";
    cin>>e.employeeName;
    cout<<"Employee Department ";
    cin>>e.employeeDept;
    cout<<"Employee Salary ";
    cin>>e.employeeSalary;

    insertEmployee(e);
    }

    else if(z == 2){
    cout<<endl;
    cout<<"Search an employee "<<endl;
    cout<<"****************************"<<endl;
    cout<<endl;
    int a;
    cout<<"Employee ID - ";
    cin>>a;
    cout<<endl;
        if (Search(root, a))
        {
            cout <<"Employee Found";
            cout<<endl;
        }
       else
        {
            cout <<"Employee Not Found";
            cout<<endl;
        }
    }

    return main();
}
