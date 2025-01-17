#include<iostream>
using namespace std;

int main(){
    float pencil,pen,eraser;
    cout<<"Enter the cost of pencil,pen,eraser : "<<endl;
    cin>>pen>>pencil>>eraser;
    float total = pen+pencil+eraser;
    cout<<"Total cost is Rs."<<total<<endl;
    float withGST = total+total*18/100;
    cout<<"Total cost with GST is Rs."<<withGST;
    return 0;
}