#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
};


// this will not swap a and b
int swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
};


// call by reference using pointer
int swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
};


// call by reference using C++ reference variable
int swapReference(int &a , int &b ){
    int temp = a;
    a = b;
    b = temp;
};

// Return by reference 
int & swapReturnReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
};


int main(){
    
    int x = 4, y = 5;
    // cout << "The sum of 4 and 5 is : " << sum(a,b) << endl;
    cout << "The value of x is " << x << " and the value of b is " << y << endl;
    // swap(x,y);  // call by value

    // swapPointer(&x,&y);  // using pointer

    // swapReference(x , y);  // using reference variable
    swapReturnReference(x , y) = 300;  // return reference
    cout << "The value of x is " << x << " and the value of b is " << y << endl;
    return 0;
};