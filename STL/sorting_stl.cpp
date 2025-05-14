#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // // taking input of an array
    // int n;
    // cin >> n;
    
    // int a[n];
    // // the name of an array itself point to the first element address
    // for(int i=0; i<n; i++){
    //     cin >> a[i];
    // }
    // // STL inbuilt sort function 
    // // sort() --> it takes two parameter 1) address of the elment from where the sorting begins 2) next address after the last element where the sorting ends. 
    // sort(a, a+n);
    // for(auto sortedElement : a){
    //     cout << sortedElement << endl;
    // }


    // with vector

    int m;
    cin >> m;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(auto &element : a){
        cout << element << endl;
    }
    return 0;
}