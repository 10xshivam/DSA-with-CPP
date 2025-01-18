#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the three digit number number : "<<endl;
    cin >> n;
    int num = n;
    int digit1 = num % 10;
    num /= 10;
    int digit2 = num % 10;
    int digit3 = num / 10;

    int cubeSum = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;
    
    if(cubeSum == n){
        cout << "It is a armstrong number.";
    } else {
        cout << "It is not a armstrong number.";
    }
    return 0;
}