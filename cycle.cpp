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


void makecycle(node* &head, int pos){
    node* p1 = head;
    node* p2;
    int i = 1;
    while(p1->next != NULL){
        if(i == pos){
            p2 = p1;
        }
        p1 = p1->next;
        i++;
    }
    p1->next = p2;
}

bool detectcycle(node* head){
    node* slow = head;
    node* fast = head;

    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast!=slow);

    fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;

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
    node* head = new node(1);
    node* second = new node(2);
    node * third = new node(3);
    node *fourth = new node(4);
    node *fifth = new node(5); 
    node *sixth = new node(6);
    node *seventh = new node(7);
    node *eighth = new node(8);
    node *ninth = new node(9);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;

    makecycle(head, 4);
    // display(head);
    cout<<detectcycle(head)<<endl;
    removeCycle(head);
    cout<<detectcycle(head)<<endl;
    display(head);



    return 0;
}
    