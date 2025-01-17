#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the Year : ";
    cin>>year;
    if (year % 100 == 0){
        if(year % 400 == 0){
            cout<<"leap year";
        } else {
            cout << "Not a leap year";
        }
    }
    else
    {
        if (year % 4 == 0)
    {
        cout<<"Leap year";
    } else
        cout<<"Not a leap year";
    }
    return 0;
}