#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    queue<string> q;
    q.push("abc"); 
    q.push("gfv"); 
    q.push("hfsd"); 
    q.push("jgfjd"); 
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}