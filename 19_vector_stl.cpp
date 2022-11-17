#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity --> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity --> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    cout<<"Element at 2nd index : "<<v.at(2)<<endl;
    cout<<"front : "<<v.front()<<endl;

    cout<<"before pop - "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop - "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    vector<int> a(5, 1);
    cout<<"print a -"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a);  //copies all the elements of a in last 
    return 0;
}