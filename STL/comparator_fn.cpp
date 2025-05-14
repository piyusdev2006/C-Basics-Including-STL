#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// bool should_i_swap(int a, int b){
//     if(a > b) return true;
//     return false;
// }

// bool comparator(pair<int,int> a, pair<int, int> b){
//     if(a.first != b.first) {
//         if(a.first > b.first) return false;
//         return true;
//     }else {
//         if(a.second < b.second) return false;
//         return true;
//     }
// }

// OR

bool comparator(pair<int,int> a, pair<int, int> b){
    if(a.first != b.first) {
        return a.first < b.first;
    }else {
        return a.second > b.second;
    }
}


int main(){
    int n; 
    cin >> n;
    vector<pair<int,int> > a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), comparator );
    for(int i=0; i<n; i++){
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << endl;
    return 0;
}