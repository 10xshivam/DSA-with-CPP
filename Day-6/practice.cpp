#include<iostream>
using namespace std;

int main(){
    // BOX PATTERN
    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << i << " ";
    //     }

    //     cout << endl;
        
    // }

    //STAR PATTERN 
    // int n = 6;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    
    //INVERTED PATTERN
    int n = 10;
    for (int  i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}