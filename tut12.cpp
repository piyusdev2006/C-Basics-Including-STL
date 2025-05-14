#include<iostream>
using namespace std;

int main(){
    // what is a pointer ->  a data type which holds the address of another variable 

    int a = 4;
    int* b = &a;

    // finding adress of a in two different way & --> Adress of operator
    cout << "The address of a is : " << &a << endl;
    cout << "The address of a is : " << b << endl;

    // finding value of a  using * (value at ) operator
    cout << "The value of a is : " << a << endl;
    cout << "The value at address b is : " << *b << endl;

    // pointer to pointer

    int** c = &b;

    cout << "The adress of b is : " << &b << endl;
    cout << "The adress of b is : " << c << endl;

    cout << "The value of b is : " << *b << endl;
    cout << "The value at address value (value at (c)) is : " << **c << endl;




    return 0;
}