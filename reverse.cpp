#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;

    }
};
void reverse(node* &head){
    node* previous;
    node* current;
    node* next;
    previous=NULL;
    current=head;
    while(current!= NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next; 
    }
    head = previous;
}
void display(node* &head){
    node* ptr = head;
    while(ptr!= NULL){
        cout<<ptr->data<< " -> ";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=new node(1);
    node* second=new node(43);
    node* third=new node(77);
     head->next=second;
     second->next=third;
     third->next=NULL;
     reverse(head);
     display(head);
     return 0;
     }