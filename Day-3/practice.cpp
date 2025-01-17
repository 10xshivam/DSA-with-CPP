#include<iostream>
using namespace std;

int main(){
    // cout<<(bool)3+2<<endl;//explicit casring
    // cout<<(23.5+2+'A');//implicit casting

    int a = 2, b = 3,c,d;
    c = ++a;
    cout<<"value of c : "<<c<<endl;
    d = --b;
    cout<<"value of d : "<<d;
    return 0;
}