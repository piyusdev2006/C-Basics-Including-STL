#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // taking vector input 
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;

    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    int sum = accumulate(v.begin(), v.end() , 0);
    cout << sum << endl;

    int elementCount = count(v.begin(), v.end() , 3);
    cout << elementCount << endl;

    auto it = find(v.begin(), v.end() , 3);
    if(it != v.end()){
        cout << *it << endl;
    }else{
        cout << "Element not found";
    }

    reverse(v.begin(), v.end());
    for(auto element : v){
        cout << element << endl;
    }

    string s = "Naveen Singh";
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}