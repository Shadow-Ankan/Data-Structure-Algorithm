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

void deletion(Node* &head, int value){
    Node* a = head;
    if(a->data == value){
        head = a->next;
        delete a;
        return;
    }
    while(a->next->data != value){
        a = a->next;
    }
    Node* todelete = a->next;
    if(todelete->next == NULL){
        a->next = NULL;
        delete todelete;
        return;
    }
    else{
    a->next = todelete->next;
    delete todelete;
    }

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
    Node* third = new Node(69);
    head->next = second;
    second->next = third;
    deletion(head, 50);
    display(head);

    return 0;
}