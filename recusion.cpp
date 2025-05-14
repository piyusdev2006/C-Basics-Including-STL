#include<iostream>
using namespace std;

// factorial of a number
// int factorial(int n){
//     if(n <= 1){
//         return 1;
//     };
//     return n * factorial(n-1);
// };

// fibonacci sequence
int fib(int n){
    if(n<2){
        return 1;
    };
    return fib(n-2) + fib(n-1);
};

int main(){
    // Factorial of a number
    // 6! = 6*5*4*3*2*1
    // n! =(n * n-1)!

    // int a;
    // cout << "Enter a number : " << endl;
    // cin >> a;
    // cout << "The factorial of " << a << " is " << factorial(a) << endl;

    // fibonacci sequence
    int a;
    cout << "Enter a number : " << endl;
    cin >> a;
    cout << "the term in fibonacci sequence at position  "<< a << " is " << fib(a) << endl;
    
    return 0;
}