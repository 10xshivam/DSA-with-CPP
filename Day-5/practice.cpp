#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //     cout << i << " ";
    // }

    // Sum of first n natural numbers
    // int n;
    // int sum = 0;
    // cout<<"Enter the number : ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<"Sum is : "<<sum;

    // Pattern print
    // for (int i = 0; i < 4; i++) {
    //     cout << "****"<<endl;
    // }

    //Print from n to 1
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // for (int i = n; i>=1; i--) {
    //     cout << i << " ";
        
    // }

    // SUM OF DIGITS 10829 USING WHILE LOOP
    // int n = 10829, sum = 0;
    // while (n>0) {
    //     sum += n%10;
    //     n /= 10;
    // }
    // cout << "Sum is " << sum;

    // SUM OF ODD DIGITS OF A 10829
    // int n = 10829, digit,sum = 0;
    // int i = 0;
    // while (n>0) {
    //     digit = n%10;
    //     if(digit%2!=0){
    //         sum+=digit;
    //     }
    //     n /= 10;
    // }
    // cout << "Sum of odds " << sum;

    //PRINT THE DIGITS OF 10829 IN REVERSE 
    // int n = 10829,digit;
    // while (n>0) {
    //     digit = n%10;
    //     cout << digit;
    //     n /= 10;
    // }

    //PRINT THE REVERSE OF 10829 
    // int n = 10829,digit,result = 0;
    // while (n>0) {
    //     digit = n%10;
    //     result = result*10 + digit;
    //     n /= 10;
    // }
    // cout << "Reverse is " << result;
    
    // Break based question
    // int n;
    // while(true){
    //     cout<<"Enter the two digit number : ";
    //     cin>>n;
    //     if(n % 10 == 0){
    //         break;
    //     }
    // }
    // cout << "LOOP END";

    // Continue based question
    // int n;
    // do
    // {
    //     cout<<"Enter the number : ";
    //     cin>>n;
    //     if(n % 10 == 0){
    //         continue;
    //     }
    //     cout << "You entered " << n << endl;
    // } while (true);
    

    // CHECK THE NUMBER IS PRIME OR NOT
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool isPrime = true;

    for (int i = 2 ; i<=sqrt(n); i++) {
        if (n % i == 0) { 
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Number is Prime";
    } else {
        cout << "Number is not Prime";
    }










    return 0;
}