#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node {
  int item;
  struct Node* next;
};

void insertAtBeginning(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = (*ref);
  (*ref) = new_node;
}

void insertAfter(struct Node* prev_node, int data) {
  if (prev_node == NULL) {
    cout << "the given previous node cannot be NULL";
    return;
  }
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertAtEnd(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;
  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }
  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** ref, int key) {
  struct Node *temp = *ref, *prev;
  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
  }
  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }
  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}

void printList(struct Node* node) {
  while (node != NULL) {
    cout << node->item << " ";
    node = node->next;
  }
}
bool search(Node* head, int x)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->item == x)
            return true;
        current = current->next;
    }
    return false;
}

int main() {
  struct Node* head = NULL;

  insertAtEnd(&head, 1);
  insertAtEnd(&head, 4);
  insertAtEnd(&head, 7);
  insertAtEnd(&head, 9);
  insertAtEnd(&head, 3);
  insertAtEnd(&head, 2);

  int option;
  cout<<"1.Display"<<endl;
  cout<<"2.Insert"<<endl;
  cout<<"3.Delete"<<endl;
  cout<<"4.Search"<<endl;
  cout<<"Enter Your Choice:";
  cin>>option;
  if(option == 1){
    cout << "Linked list: ";
    printList(head);
  }
  else if(option == 2){
        int value;
        cout<<"1.At Starting"<<endl;
        cout<<"2.After a node"<<endl;
        cout<<"Insert Choice: ";
        cin>>value;
        if(value == 1){
            cout<<"Input insert value: ";
            int b;
            cin>>b;
            insertAtBeginning(&head, b);
            printList(head);
        }
        else if(value == 2){
            cout<<"Input insert value: ";
            int b;
            cin>>b;
            insertAfter(head->next, b);
            printList(head);
        }
  }
  else if(option == 3){
    printList(head);
    cout<<endl;
    cout<<"Input value to delete: ";
    int d;
    cin>>d;
    cout << "\nAfter deleting an element: ";
    deleteNode(&head, d);
    printList(head);
  }
 else if(option == 4){
        cout<<"Input Search value: ";
        int z;
        cin>>z;
    search(head, z)? cout<<"Yes" : cout<<"No";
 }
 cout<<endl;
 return main();
 cout<<endl;
}
