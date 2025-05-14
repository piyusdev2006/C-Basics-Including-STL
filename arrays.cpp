#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 67, 75};

    // Arrays can be declared in these ways also
    int mathMarks[4];

    mathMarks[0] = 78;
    mathMarks[1] = 45;
    mathMarks[2] = 78;
    mathMarks[3] = 72;

    // You can change the value of an array
    marks[2] = 71;  

    // cout << marks << endl;

    cout << "these are marks : " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;


    cout << "these are mathMarks : " << endl;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;


    // print the value of an array using while loop
    for (int i = 0; i < 4; i++){
        /* code */
        cout << "the value of marks " << i << " is " << marks[i] << endl;
        
    }
    
    cout << endl;
    // print the value of an array using while loop
    int i = 0;
    while (i < 4) {
        cout << "the value of marks " << i << " is " << marks[i] << endl;
        i++;
    }
    
    return 0;
}