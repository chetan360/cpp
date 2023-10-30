#include <bits\stdc++.h>
using namespace std;

class node {
    public :
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
        head = n;
        return;
    }

    node* t = head;
    while(t->next != NULL) {
        t = t->next;
    }
    t->next = n;
}

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void display(node* head) {
    while(head != NULL) {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int val) {
    while(head != NULL) {
        if(head->data == val) {
            return true;
        }
        head = head->next;
    }
    return false;
}

void deleteAtHead(node* &head) {
    node* toDelete = head;
    head = head->next;

    delete toDelete;
}

void deletion(node* &head, int val) {
    //empty list
    if(head == NULL) {
        return;
    }

    //frist node is the last node
    if(head->next == NULL) {
        deleteAtHead(head);
        return;
    }

    node* t = head;

    //delete by val
    while(t->next->data != val) {
        t = t->next;
    }
    node* toDelete = t->next;
    t->next = t->next->next;

    delete toDelete;
}

int main() {
    node* head = NULL;

    insertAtTail(head, 1); 
    insertAtTail(head, 2); 
    insertAtTail(head, 3); 
    insertAtTail(head, 4); 
    insertAtTail(head, 5); 

    // display(head);

    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);

    // display(head);
    // int n;
    // cin>>n;
    // if(search(head, n)) {
    //     cout<<"Found."<<endl;
    // } else {
    //     cout<<"Not Found."<<endl;
    // }

    display(head);

    int n;
    cin>>n;
    deletion(head, n);

    display(head);

    return 0;
}