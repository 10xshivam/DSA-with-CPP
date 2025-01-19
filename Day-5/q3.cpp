#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int num,n, digit, cubeSum = 0;
    cout << "Enter the number :";
    cin >> n;
    num = n;
    while (n > 0)
    {
        digit = n % 10;
        cubeSum += pow(digit, 3);
        n /= 10;
    }

    if (cubeSum == num)
    {
        cout << "Number is Armstrong";
    } else
    {
        cout << "Number is not Armstrong";
    }

    return 0;
}