#include<iostream>
using namespace std;

int main(){
    int n,fibo = 0;
    int first = 0, second = 1;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Fibonacci Series :" << first << " " <<second << " ";
    for (int i = 0; i <= n; i++)
    {
        fibo = first + second;
        cout << fibo << " ";
        first = second;
        second = fibo;
    }
    
    return 0;
}