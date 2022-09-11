#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* previous;

    node(int val){
        data = val;
        next = NULL;
        previous = NULL;
    }
};

void insertAtTop(node* &head, int val){
    node* a = new node(val);
    a->next = head;
    head->previous = a;
    head = a;

}

void insertAtEnd(node* &head, int val){
    node* a = new node(val);
    node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = a;
    a->previous = ptr;

}

void insertAtIndex(node* &head, int val, int index){
    if(index == 0){
        insertAtTop(head, val);
    }
    else{
    node* a = new node(val);
    node* ptr = head;
    int i = 0;
    while(i<index-1){
        ptr = ptr->next;
        i++;
    }
    if(ptr->next == NULL){
       insertAtEnd(head, val);
    }
    else{
    a->next = ptr->next;
    node* b = ptr->next;
    ptr->next = a;
    a->previous = ptr;
    b->previous = a;

    }
    }
}

void display(node* head){
    node* a = head;
    while(a != NULL){
        cout<<a->data<<" ";
        a = a->next;
    }
    cout<<endl;
}
int main(){
    node* head = new node(50);
    node* second = new node(60);
    node * third = new node(70);
    node *fourth = new node(80);

    head->next = second;
    second->previous = head;
    second->next = third;
    third->previous = second;
    third->next = fourth;
    fourth->previous = third;

    display(head);
    insertAtTop(head, 40);
    display(head);
    insertAtIndex(head, 55, 2);
    display(head);
    insertAtIndex(head, 90, 6);
    display(head);


    return 0;
}