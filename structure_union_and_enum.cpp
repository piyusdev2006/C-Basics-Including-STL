#include<iostream>
using namespace std;

// structure
struct employee{
    int eId;
    char favChar;
    float salary;
};

// Another way of defining structure
typedef struct employeeData{
    int eId;
    char favChar;
    float salary;
} ep;



// Unions in cpp
union money{
    /* data */
    int rice;
    char car;
    float pounds;
};



int main(){
    // ep Naveen;
    // ep Nikhil;
    // struct employee Navneet;
    // Naveen.eId = 3;
    // Naveen.favChar = 'n';
    // Naveen.salary = 35000;

    // cout << "The value of employee Naveen is : " << Naveen.eId << endl;
    // cout << "The value of employee Naveen is : " << Naveen.favChar << endl;
    // cout << "The value of employee Naveen is : " << Naveen.salary << endl;

    

    // union exapmle

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 54.5;
    // cout << m1.pounds;


    // Enumerator or Enum in C++
    enum Meal{breakfast , lunch , dinner};
    Meal m1 = lunch;
    cout << m1 << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;


    return 0;
}