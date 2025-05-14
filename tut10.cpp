#include<iostream>
using namespace std;

int main(){
    /*
        Loops in c++
        There are 3 type of loops in c++
        1. For loop 
        1. While loop 
        1. Do-While loop 
    */

        //    int i =1;
        //    cout << i << endl;
        //    i++;


    // for loop

    // for (int i = 1; i < 40; i++){
    //     cout << i << endl;
        
    // }

    // while loop
    // Printing 1 to 40 using while loop

    // int i = 5;
    // while(i <= 40){
    //     cout << i << endl;
    //     i++;
    // }

    
    // do-while loop
    // int i = 1;
    // do
    // {
    //     /* code */
    //     cout << i << endl;
    //     i++;
    // } while (false);
    

    // table of 6 using do while
    int i = 1;
    cout << "Table of 6 : " << endl;

    do
    {
        cout << "6 * " << i << " = " << 6 * i << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}