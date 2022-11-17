#include<iostream>
using namespace std;
#include<cmath>
#include<algorithm>

void reverse_str(int i, int j, string& str){       //pass as reference variable or return the string in order to get right answer
    cout<<"Call received for "<<str<<endl;
    //base case
    if(i>j)
        return ;
    
    swap(str[i], str[j]);
    i++;
    j--;

    //recursive call
    reverse_str(i, j, str);
}

int main(){
    string s = "raheja";
    cout<<s<<endl;
    reverse_str(0, s.length()-1, s);
    cout<<s<<endl;
    return 0;
}