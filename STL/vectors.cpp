#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void printVect(vector<string> &s){
    cout << "size : " << s.size() << endl; 
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " "; 
    }
    cout << endl;
}

int main(){
    // int a[10]; // array of fixed sizes

    // vector<int> vect;  // array of dynamic size
    // int n;  // size of a vector array
    // cout << " Enter the size of an array: " << endl;
    // cin >> n;
    // for (int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     printVect(vect);
    //     vect.push_back(x);   // O(1)---> TC
    // }
    // printVect(vect);

    // here vectors can be declared of any size 

    // vector<int>vect(5 , 1);
    // vector<int> vect(5);
    vector<int> vect;
    vect.push_back(3);
    vect.push_back(6);
    // vect.pop_back();
    // printVect(vect);

    // push_back() and pop_back() execute in O(1) Time complexity

    // vector<int> &v1 = vect;   // O(n) time complexity
    // v1.push_back(5);
    // printVect(vect);
    // printVect(v1);


    // vector of string
    vector<string>v;
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    printVect(v);
    return 0;
}