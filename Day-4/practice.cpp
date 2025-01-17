#include<iostream>
using namespace std;

int main(){
    // int a,b;
    // cout<<"Enter two numbers :"<<endl;
    // cin>>a>>b;
    // if (a>b) {
    //     cout<<"a is largest"<<endl;
    // } else {
    //     cout<<"b is largest"<<endl;
    // }

    // int n = 5;
    // if (n % 2 == 0){
    //     cout<<"Even"<<endl;
    // } else {
    //     cout<<"Odd";
    // }

    // Income tax calculator
    // int income,tax;
    // cout<<"Enter your Income(in lakhs) :";
    // cin>>income;
    // if (income < 500000){
    //     tax = 0;
    // } else if (500000<=income<=1000000){
    //     tax = income*0.2;
    // } else {
    //     tax = income*0.3;
    // }
    // cout<<"Your tax is : "<<tax;
    // return 0;

    // Largest of three numbers 
    // int a,b,c;
    // cout<<"Enter three numbers: "<<endl;
    // cin>>a>>b>>c;
    // if(a>b && a>c){
    //     cout<<a<<" is largest";
    // } else if(b>c) {
    //     cout<<b<<" is largest";
    // } else {
    //     cout<<c<<" is largest";
    // }

    // Largest of two numbers
    // int a = 5 ,b = 9;
    // int largest = (a>b) ? a : b;
    // cout << "Largest number : " << largest;

    //odd even
    // int num = 5;
    // bool isEven = num%2==0 ? true : false;
    // cout<<isEven;

    // Basic Calculator using switch
    int a,b;
    char symbol; 
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter the operation  : ";
    cin >> symbol;
    cout << "Enter second number : ";
    cin >> b;

    switch (symbol)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"Invalid operation";
        break;
    }

}