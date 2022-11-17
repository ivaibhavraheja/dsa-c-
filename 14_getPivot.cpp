#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0; 
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;       //or return e because both will have same value
}


int main(){
    int arr[6] = {3, 4, 7, 9, 2, 3};     //sorted and then rotated by 4 elements
    cout<<"Pivot index : "<<getPivot(arr, 6)<<endl;    
    return 0;
}