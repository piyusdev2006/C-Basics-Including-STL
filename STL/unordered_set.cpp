#include<bits/stdc++.h>
#include<iostream>
using namespace std;\

void print(unordered_set<string> &s){
    cout << "size: " << s.size() << endl;
    for(auto &it : s){
        cout << it << " " << endl; 
    }
}

int main(){
    unordered_set<string> s; // set declaration

    // insertion
    s.insert("Navi");     // Tc => O(1)
    s.insert("Piyush");
    s.insert("Chotu");

    // access
    auto it = s.find("Piyush"); // Tc => O(1)
    if(it != s.end()){
        cout <<(*it);
    }

    // erase function
    // auto it = s.find("Piyush"); // Tc => O(1)
    // if(it != s.end()){
    //     s.erase(it);    // iterator as a input
    // }

    // s.erase("Navi");    // element as input


    // print set
    print(s);

    return 0;
}