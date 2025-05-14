#include<iostream>
using namespace std;

int c = 45;

int main(){

    // ***********************Built in data types*****************************
    // int a, b, c;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;
    // c = a+b;
    // cout << "The sum of c is : " << c << endl;
    // cout << "The global value of c is : " << ::c << endl; // here scope resolution operator is used
    
    // ***********************float , double and long double literals***********

    // by default c++ compiler consider it as double
    // float d = 34.4F;
    // cout << "The size of 34.4 is :" << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is :" << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is :" << sizeof(34.4F) << endl;
    // long double e = 34.4L;  
    // cout << "The size of 34.4 is :" << sizeof(34.4) << endl;
    // cout << "The size of 34.4l is :" << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is :" << sizeof(34.L) << endl;

    // 34.4f = specifying that this number is floating number
    // cout << "the value of d is" << d << "\nthe value of e is " << e;


    // ************************reference Variables*****************
    // Naveen ----> navi ----> navin = reference for tje saame name
    // float x = 455;
    // float & y = x; // here y takes the reference from x and becomes reference variable and x is the original variable
    // cout << x << endl;
    // cout << y << endl;


    // *************************Typecasting**********
    int a = 45;
    float b = 45.46;
    cout << "The value of a is : " << (float)a << endl;
    cout << "The value of a is : " << float(a) << endl;

    cout << "The value of a is : " << int(b) << endl;
    cout << "The value of b is : " << (int)b << endl;

    int c = int(b);
    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;
    return 0;
}