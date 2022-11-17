#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;
    m[1]="vaibhav";
    m[2]="raghav";
    m[3]="shubham";
    
    m.insert({5, "udayveer"});
    cout<<"before erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 5 --> "<<m.count(5)<<endl;
    m.erase(3);
    cout<<"after erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //time complexity --> O(log n) for every operation of ordered map
    
    // auto it = m.find(2);
    // for(auto i=it; i!=m.end(); it++){
    //     cout<<(*i).first<<endl;
    // }
    return 0;
}