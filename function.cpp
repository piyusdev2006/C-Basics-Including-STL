#include<iostream>
using namespace std;

// function prototype
// type function-name(argument) ---> syntax of fn prototype
int sum(int a, int b);  // ---> acceptable
int sum(int, int); // ----> acceptable

// int sum(int a, b)   ---> Not Acceptable
void g(void);


int main(){
    int num1, num2;
    cout << "Enter first number : " << endl;
    cin >> num1 ;
    cout << "Enter second number : " << endl;
    cin >> num2 ;
    cout << "The sum is : " << sum(num1 , num2) << endl;
    g();
    return 0;
}

int sum(int a , int b){
    int c = a + b;
    return c;
}

void g(){
    cout << "\nHello ! Good Morning..." << endl;
}