#include<iostream>
using namespace std;

// function overloading example --> function with the different arguments but with the same name 
int add(int a, int b){
    cout << "using function with 2 arguments" << endl;
    return a + b;
};

int add(int a, int b, int c){
    cout << "using function with 3 arguments" << endl;
    return a + b + c;
};


// calculating volume of cube , cuboid and cylinder

int volume(int r, int h){
    return (3.14 * r * r * h);
};

int volume(int a){
    return (a * a * a);
};

int volume(int l, int b, int h){
    return (l * b * h);
};

int main(){
    cout << "the sum of 3 and 7 is : " << add(3,7) << endl;
    cout << "the sum of 3 , 5 and 7 is : " << add(3,5,7) << endl;
    cout << "the volume of cuboid of dimension 3 , 5 and 7 is : " << volume(3,5,7) << endl;
    cout << "the volume of cube of side 5 is : " << volume(5) << endl;
    cout << "the volume of cylinder 5 and 6 is : " << volume(5, 6) << endl;
    return 0;
}