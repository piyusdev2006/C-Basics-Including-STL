#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int a[n]; // array
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    // the given array or vector must be sorted
    // sort(a, a+n);  // for array
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // for array
    // int *ptr = upper_bound(a, a+n, 5);
    // if(ptr == (a+n)) {
    //     cout << "Not Found";
    //     return 0;
    // }

    // for pointer
    auto it = lower_bound(a.begin(), a.end(), 5);
    if(it == a.end()) {
        cout << "Not Found";
        return 0;
    }
    cout << (*it) << endl;
    return 0;
}