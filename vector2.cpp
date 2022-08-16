#include <iostream>
#include <vector>
#include <string.h>
#include<algorithm>

using namespace std;
template <class T>

void display(vector<T> vec)
{
    auto it = vec.begin();
    cout<<"The elements in the vector are : "<<endl;
    for (; it != vec.end(); it++)
    {
        cout << "  " << *it;
    }
    cout << endl;
}

int main()
{
    vector<int> vec1 = {15, 50, 69, 80, 45};
    int key;
    display(vec1);
    cout<<"Enter the element you wish to delete : ";
    cin>>key;
    auto it = find(vec1.begin(), vec1.end(), key);
    if(it == vec1.end()){
        cout<<"Element not found \nCould not delete the element ";
    }
    else{
        vec1.erase(it);
        cout<<"Element deleted "<<endl;
        display(vec1);
    }

    return 0;
}