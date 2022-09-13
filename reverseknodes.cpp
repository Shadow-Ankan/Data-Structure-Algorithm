#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

node* reversek(node* &head, int k){
    node* prev = NULL;
    node* current = head;
    node* after;

    int i = 0;
    while(current != NULL  &&  i<k){
        after = current->next;
        current->next = prev;
        prev = current;
        current = after;
        i++;
    }
    if(after!=NULL){
   head->next = reversek(after, k);
    }

    return prev;
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
    node* head = new node(5);
    node* second = new node(6);
    node * third = new node(7);
    node *fourth = new node(8);

    head->next = second;
    // second->previous = head;
    second->next = third;
    // third->previous = second;
    third->next = fourth;
    // fourth->previous = third;

    display(head);
    node* newhead = reversek(head, 2);
    display(newhead);

    return 0;
}