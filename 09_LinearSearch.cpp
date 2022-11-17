#include<iostream>
using namespace std;

bool search(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    //whether 1 is present in it or not?
    int key;
    cout<<"Enter the element to search for : ";
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    return 0;
}