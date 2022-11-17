#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i=i+2)
    {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {3, 4, 91, 12, 32, 7, 18, 5};
    int odd[5] = {11, 33, 22, 44, 55};

    swapAlternate(even, 8);
    printArray(even, 8);
    cout<<endl;
    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}