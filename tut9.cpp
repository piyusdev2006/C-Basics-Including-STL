#include<iostream>
using namespace std;

int main(){

    // selection control structure using if-else and if-else ladder

    int age;
    cout << "Enter Yor Age" << endl;
    cin >> age;

    // if(age < 18){
    //     cout << "You cannot come to my party" << endl;
    // }else if(age == 18){
    //     cout << "You can only come to my party with yuor party" << endl;
    // }else{

    //     cout << "You can come to my party" << endl;
    // }


    // // selection control structure using switch case statement

    switch (age)
    {
    case  18:
        cout << "Yo are 18" << endl;
        break;
    case  22:
        cout << "Yo are 22" << endl;
        break;
    case  2:
        cout << "Yo are 2" << endl;
        break; 
    default:
        cout << " Invalid age" << endl;
        break;
    }

    cout << "This is new Program of control structure";
    return 0;
}