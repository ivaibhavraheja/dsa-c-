#include<iostream>
using namespace std;

//number of columns need to be specified
bool isPresent(int arr[][3], int target, int row, int col){
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            if(arr[row][col] == target)
                return 1;
        }
    }
    return 0;
}  //time complexity : O(row*col)

//to print row wise sum
void printSum(int arr[][3], int row, int col){
    cout<<"Printing sum --> "<<endl;
    for (int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 3; col++){
            sum = sum + arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
} 

//to print column wise sum
void printColSum(int arr[][3], int row, int col){
    cout<<"Printing sum --> "<<endl;
    for (int col = 0; col < 3; col++){
        int sum = 0;
        for (int row = 0; row < 3; row++){
            sum = sum + arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
} 

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT32_MIN;
    int rowIndex= -1;
    for (int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 3; col++){
            sum = sum + arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is : "<<maxi<<endl;
    return rowIndex;
} 

int main(){
    //create 2D array
    int arr[3][3];
    //int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    cout<<"Enter the elements : "<<endl;
    //taking input --> row wise
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cin>>arr[row][col];
        }
    }

/*    
    //taking input --> column wise
    for (int col = 0; col < 4; col++){
        for (int row = 0; row < 3; row++){
            cin>>arr[col][row];
        }
    }
*/

    cout<<"Printing the array : "<<endl;
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

/*
    int target;
    cout<<"Enter the element to search : ";
    cin>>target;
    if(isPresent(arr, target, 3, 3)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    printSum(arr, 3, 3);
*/

    int ansIndex = largestRowSum(arr, 3, 3);
    cout<<"max row is at index : "<<ansIndex<<endl;
    return 0;

}