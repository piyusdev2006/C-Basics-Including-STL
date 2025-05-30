/*
Given N strings, print unique strings in lexi0graphical order with thier frequency
N <= 10^5
|S| <= 100
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    for (int i=0; i < n ;i++){
        string s;
        cin >> s;
        // m[s] = m[s] + 1;
        m[s]++;
    }
    for(auto pr : m){
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}