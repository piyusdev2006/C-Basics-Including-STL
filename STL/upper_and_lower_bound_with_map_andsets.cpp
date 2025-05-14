#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // int n; 
    // cin >> n;
    set<int> s;
    map<int,int> m;
    for(int i=0; i < int(1e6); i++){
    // for(int i=0; i<n; i++){
        // int a;
        // cin >> a;
        s.insert(rand());
    }
    for (int i = 0; i < int(1e5); i++){
        auto it = s.lower_bound(rand());
    }
    
    // cout << (*it) << endl;
    
    return 0;
}