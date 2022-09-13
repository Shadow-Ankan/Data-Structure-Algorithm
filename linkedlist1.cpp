#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void linkedlist(node* &head,int val){
    node* ptr=new node(val);
    node* a=head;
    do{
        a=a->next;
    }while(a->next != head);

    a->next = ptr;
    ptr->next = head;
    head = ptr;
}

void display(node* head){
    node* ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!= head);
}
int main(){
    node* head=new node(1);
    node* second=new node(43);
    node* third=new node(77);
     head->next=second;
     second->next=third;
     third->next=head;
     linkedlist(head, 50);
     display(head);
     return 0;
     }