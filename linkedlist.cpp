// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

 void insertAtEnd(Node* &head, int value){
    Node* a = new Node(value);
    if(head == NULL){
        head = a;
        return;
    }

    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = a;
}

void insertAtTop(Node* &head, int value){
    Node* a = new Node(value);

    if(head == NULL){
        head = a;
        return;
    }

    Node* ptr = head;
    a->next = ptr;
    head = a;
}

void insertAtIndex(Node* &head, int value, int index){
    Node* a = new Node(value);
    if(head == NULL){
        head = a;
        return;
    }

    if(index == 0){
        insertAtTop(head, value);
    }

    Node* ptr = head;
    int i = 0;
    while(i < index){
        ptr = ptr->next;
        i++;
    }

    a->next = ptr->next;
    ptr->next = a;
}

void display(Node* &head){
    Node* ptr = head;
    while(ptr!= NULL){
        cout<<ptr->data<< " -> ";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = new Node(50);
    Node* second = new Node(30);
    head->next = second;
    insertAtEnd(head, 69);
    insertAtTop(head, 99);
    insertAtIndex(head, 55, 2);
    display(head);

    return 0;
}