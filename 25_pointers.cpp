#include<iostream>
using namespace std;

int main(){
    /*
    int i = 5;
    int *q = &i;
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
    */

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p  = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    //copying a pointer
    int *q = p;
    cout << p <<" - " << q << endl;
    cout << *p <<" - " << *q << endl;


    //important concept
    int i = 3;
    int *t = &i;
    //cout <<  (*t)++ << endl;
    *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;

    
    /*
    int num = 5;
    cout<<num<<endl;
    cout<<"address of num is "<<&num<<endl;

    int *ptr = &num;
    cout<<"value of num is "<<*ptr<<endl;
    cout<<"address of num is "<<ptr<<endl;

    double d = 4.3;
    double *p2 = &d;
    cout<<"value of d is "<<*p2<<endl;
    cout<<"address of d is "<<p2<<endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is "<<sizeof(p2)<<endl;
    */

    return 0;
}