#include <iostream>
#include <vector>
#include <string.h>

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
    // Initalizing vector 
    vector<int> vec1;
    vector<int> vec2(4, 100);
    vector<int> vec3(vec2);
    vector<int> vec4 = {5, 6, 15, 26, 69};
    vector<char> vec5(5, 'A');
    vector<string> vec6(3, "Ankan");

    // Inserting values in vector methods
    int a=6, b=10;
    vec1.push_back(a);
    vec1.push_back(b);
    vector<int> :: iterator it = vec1.begin();
    
    vec1.insert(it, 7);
    // cout<<"Next insertion "<<endl;
    it = vec1.begin(); //we need to reassign value to it after every insert
    vec1.insert(it, 2, 69);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+2, vec2.begin(), vec2.end());
    int arr[10] = {11, 12, 13, 14, 15};
    iter = vec1.begin();
    vec1.insert(iter, arr, arr+5);


    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
    display(vec5);
    display(vec6);

    

    return 0;
}