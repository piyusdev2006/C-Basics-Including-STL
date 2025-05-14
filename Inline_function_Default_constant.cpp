#include<iostream>
using namespace std;

// inline function
inline int product(int x, int y){
    return x*y;
};

// default argument
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    // int a,b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;

    // cout << "The product of a and b is : " << product(a,b) << endl;
    // cout << "The product of a and b is : " << product(a,b) << endl;

    int money = 100000;
    cout << "If u have " << money << " rs in ur bank account , u will receive " << moneyReceived(money) << "after 1 year " << endl;
    cout << "If u have " << money << " rs in ur bank account , u will receive " << moneyReceived(money , 1.1) << "after 1 year " << endl;
};