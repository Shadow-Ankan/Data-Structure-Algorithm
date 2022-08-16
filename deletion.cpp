#include<iostream>

using namespace std;

void display(int arr[], int size){
     cout<<"The elements in the array are : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void deletion(int arr[], int &size, int index){
    if(index<=size){
        for(int i=index; i<size-1; i++){
            arr[i] = arr[i+1];
        }
        size-=1;
        display(arr, size);
        }
    
    else{
        cout<<"Index out of scope , no element found at the index "<<endl;
    }
}

int main(){
    int element, index;
    int arr[50] = {1,5,7,9,18,25};
    int size = 6;
    display(arr, size);
    cout<<"Enter the index you wish to delete : ";
    cin>>index;
    deletion(arr, size, index);
    return 0;

}