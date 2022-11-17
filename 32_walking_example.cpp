#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"source : "<<src<<"  destination : "<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"pahunch gya"<<endl;
        return ;
    }

    //processing - ek step aage bdh jao
    src++;
    //recursive call
    reachHome(src, dest);

    //or --> use only reachHome(src+1, dest);
}


int main(){
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
    return 0;
}