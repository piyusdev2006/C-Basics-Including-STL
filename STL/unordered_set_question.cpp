/*
Given N strings and Q queries in each query you are given a string print yes if string is present else print no.
N <= 10^5
|S| <= 100000
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    cout << endl;
    
    int q;
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        if(s.find(str)  == s.end()){
            cout << " no\n";
        }else{
            cout << "Yes\n";
        }
    }
    
    return 0;
}