#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    map<pair<int,int>, int> m;
    pair<int,int> p1,p2;
    p1 = {1,2};
    p2 = {2,3};
    cout << (p1 < p2) << endl;
    cout << (p1 > p2) << endl;


    map<set<int>,int> m1;
    set<int> s1 = {1,2,3};
    set<int> s2 = {2,3};
    cout << (s1 < s2) << endl;

    // map of pair with complex keys
    map<pair<string, string>, vector<int> > m2;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string fn, ln;
        int count;
        cin >> fn >> ln >> count;
        for(int j=0; j<count; j++){
            int x;
            cin >> x;
        m2[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : m2){
        auto &full_name = pr.first;
        auto &list =  pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for(auto  &element : list ){
            cout << element << endl;
        }
        cout << endl;
    }
    return 0;
}