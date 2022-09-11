#include<iostream>

using namespace std;

class Nodel{
    public:
    int data;
    Nodel* next;

    Nodel(int val){
        data = val;
        next = NULL;
    }  
};

void reverse(Nodel* &h){
    Nodel* previous;
    Nodel* current;
    Nodel* after;

    previous = NULL;
    current = h;

    while(current != NULL){
        after = current->next;
        current->next = previous;
        previous = current;
        current = after;
    }
    h = previous;
}

void display(Nodel* hardingersinghpandey){
    Nodel* ptr = hardingersinghpandey;
    while(hardingersinghpandey != NULL){
        cout<<hardingersinghpandey->data<<" ";
        hardingersinghpandey = hardingersinghpandey->next;
    }
    cout<<endl;
}

int main(){
    Nodel* head = new Nodel(50);
    Nodel* second = new Nodel(60);
    Nodel * third = new Nodel(70);
    Nodel *fourth = new Nodel(80);

    head->next = second;
    second->next = third;
    third->next = fourth;

    display(head);
    reverse(head);
    display(head);

    return 0;

}