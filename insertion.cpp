#include<iostream>

using namespace std;

void display(int arr[], int size){
     cout<<"The elements in the array are : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void insertion(int arr[], int &size, int element,int index, int capacity){
    if(size<capacity){
        if(index<=size+1){
        for(int i=size; i>=index; i--){
            arr[i+1] = arr[i];
        }
        arr[index]=element;
        size+=1;
        display(arr, size);
        }
        else{
            cout<<"Index is much further away than size , please provide a valid index "<<endl;
        }
    }
    else{
        cout<<"There is no space left in array to insert element "<<endl;
    }
}

int main(){
    int element, index;
    int arr[50] = {1,5,7,9,18,25};
    int size = 6;
    display(arr, size);
    cout<<"Enter the element you wish to insert : ";
    cin>>element;
    cout<<"Enter the index you wish to insert the element : ";
    cin>>index;
    insertion(arr, size, element, index, 50);
    return 0;

}