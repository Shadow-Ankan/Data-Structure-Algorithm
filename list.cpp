#include<iostream>
#include<list>
using namespace std;


//NOT WORKING RIGHT NOW
// template <class T>
// void allDisplay(list<T> l2){
//     list<T> :: iterator it;
//     auto it = l2.begin();
//     for(; it=l2.end(); it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }

void display(list<int> &l1){
    list<int> :: iterator it;
    for(it=l1.begin(); it!=l1.end(); it++){
        cout<<*it<<"  ";
    }
    cout<<endl;
}

int main(){

    list<int> list1;
    list<int> list2 = {1,6,8,3,4};
    list1.push_back(52);
    list1.push_back(17);
    list1.push_back(12); 
    list1.push_front(12);
    list1.push_front(45);

    // list<int> :: iterator it;
    // it = list1.begin();
    // cout<<*it;
    // cout<<endl;
    // display(list1);
    list1.pop_back();
    list1.pop_front();
    display(list2);
    display(list1);

    list1.remove(12);  //removing a particular element
    display(list1);
    list1.sort();
    display(list1);
    list2.sort();
    list1.merge(list2);
    display(list1);
    list1.reverse();
    display(list1);

    return 0;
}



