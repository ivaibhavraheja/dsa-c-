#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0)
        return b;

    if(b==0)
        return a;
    
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}
int main(){
    int a, b;
    cout<<"Enter the values of a and b : "<<endl;
    cin>>a>>b;
    int g = gcd(a, b);
    cout<<"gcd of a and b is "<<g<<endl;
    return 0;
}