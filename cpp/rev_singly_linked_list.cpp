#include <bits\stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val) {
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

void display(node* head) {
    while(head != NULL)  {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head) {
    node* prev = NULL;
    node* curr = head;
    node* next;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

int main() {
    node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);

    display(head);
    node* newHead = reverse(head);
    display(newHead);

    return 0;
}