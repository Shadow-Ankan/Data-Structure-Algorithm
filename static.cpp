//static variables are used to share data between
//different objects of a class
//meaning they share the same variable and its 
//updated value

#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
    void setData(){
        cout<<"Enter the Id : "<<endl;
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of this employee is "<<id<<"and this is employee number "<<count<<endl;
    }
};

int Employee:: count;  //static variables are by default 0
//we can give a value to count here if we want but it is not permitted inside class
int main(){
    Employee Ankan, Rahul, Ankit;
    Ankan.setData();
    Ankan.getData();
    Rahul.setData();
    Rahul.getData();
    Ankit.setData();
    Ankit.getData();

    return 0;
}