#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin>>num;
    if (num < 0){
        cout << "You entered negative number.";
    } else if(num == 0){
        cout<<"You entered Zero.";
    } else {
        cout << "You entered a positive number.";
    }
    return 0;
}