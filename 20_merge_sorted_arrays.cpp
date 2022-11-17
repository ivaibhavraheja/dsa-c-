#include<iostream>
using namespace std;

void merge(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i=0, j=0;
    int k=0; 
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k++] = arr2[j++];       //same as steps done above but in short
        }
    }

    //copy kerdo first array ke elements ko
    while(i<n){
        arr3[k++] = arr1[i];
    }

    //copy kerdo second array ke elements ko
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[4] = {1, 3, 5, 7};
    int b[3] = {2, 4, 6};
    int c[7];
    
    return 0;
}