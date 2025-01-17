#include<iostream>
using namespace std;

int main(){
    float p,r,t;
    cout<<"Enter the Principle,Rate,time : "<<endl;
    cin>>p>>r>>t;
    float SI = (p*r*t)/100;
    cout<<"Simple Interest : "<<SI;
    return 0;
}